import numpy as np
import os
import pytesseract
import cv2 as cv
import re


def set_tesseract_cmd_path(path):
    """
    Set path to "tesseract.exe"
    Args:
        path: full path to tesseract.exe (ex: C:/Tesseract-OCR/tesseract.exe)
    """
    pytesseract.pytesseract.tesseract_cmd = os.path.join(path)


def get_text_from_image(image_path, image_name):
    """
    Returns all text found within an image.
    Args:
        image_path: folder path of image to be searched
        image_name: name of image to be searched (*.png)

    Returns:
        text: all text found within the image
    """
    img_full_path, img, data = __build_image_data(image_path, image_name)
    text = pytesseract.image_to_string(data)
    text = re.sub('\n', ' ', text)  # remove newline characters
    return text


def get_text_coordinates_from_image(image_path, image_name, text_to_find, centered_coordinates=False):
    """
    Searches for text_to_find within an image and returns the x-axis, y-axis, width, and height OR returns the center
    of the text that was found (useful for clicking buttons based on text, etc.)
    Args:
        image_path: folder path of image to be searched
        image_name: name of image to be searched (*.png)
        text_to_find: string of text to search for
        centered_coordinates: True/False - return centered coordinates of the box containing the text_to_find

    Returns:
        False: text was not found
        x, y, w, h: x-axis, y-axis, width, and height
        x_centered, y_centered: centered x and y axis coordinates for the box containing the text_to_find
    """
    img_full_path, img, data = __build_image_data(image_path, image_name)

    text_result = pytesseract.image_to_string(data)
    text_result = re.sub('\n', ' ', text_result)  # remove newline characters

    data_result = pytesseract.image_to_data(data, output_type=pytesseract.Output.DATAFRAME)
    print(data_result)

    if text_to_find in text_result:
        x, y, w, h = __compute_coordinates_from_tesseract_data(data_result, text_to_find)

        if centered_coordinates:
            x_centered = round(x + (w / 2))
            y_centered = round(y + (h / 2))
            print("'{}' found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
            print("Coordinates of '{}': {}, {}, {}, {} (x, y, w, h)".format(text_to_find, x, y, w, h))
            print("Centered coordinates are: {}, {} (x, y)".format(x_centered, y_centered))
            return x_centered, y_centered
        else:
            print("'{}' found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
            print("Coordinates of '{}': {}, {}, {}, {} (x, y, w, h)".format(text_to_find, x, y, w, h))
            return x, y, w, h
    else:
        print("'{}' NOT found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
        return False


def verify_text_in_image(image_path, image_name, text_to_find, save_result=False, result_path="", result_name=""):
    """
    Verifies that the given text exists in an image and creates a screenshot with an overlay highlighting the location
    of the text on the image.
    Args:
        image_path: folder path of image to be searched
        image_name: name of image to be searched (*.png)
        text_to_find: string of text to search for
        save_result: True/False - save image as evidence of verification (green box around text that was found)
        result_path: folder path to save result image with highlight of found text
        result_name: name of results image file (.png)

    Returns:
        True: Text was found within the image.
            <result_name>.png: image with highlight of text found (if save_result=True)
        False: Text was not found within the image.
    """
    if not str.endswith(result_name, ".png"):
        print("Warning: result_name does not end with '.png'."
              "Appending '.png' and continuing...")
        image_name += ".png"

    img_full_path, img, data = __build_image_data(image_path, image_name)

    text_result = pytesseract.image_to_string(data)
    text_result = re.sub('\n', ' ', text_result)  # remove newline characters

    data_result = pytesseract.image_to_data(data, output_type=pytesseract.Output.DATAFRAME)

    if save_result:
        if text_to_find in text_result:
            x, y, w, h = __compute_coordinates_from_tesseract_data(data_result, text_to_find)
            cv.rectangle(img, (x, y), (x + w, y + h), (0, 255, 0), 2)

            print("'{}' found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
            cv.imwrite(os.path.join(result_path, result_name), img)
            print("Result saved as '{}' in '{}'".format(result_name, result_path))
            return True
        else:
            print("'{}' NOT found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
            return False
    else:
        if text_to_find in text_result:
            print("'{}' found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
            return True
        else:
            print("'{}' NOT found in '{}', extracted from: {}".format(text_to_find, text_result, image_name))
            return False


def __compute_coordinates_from_tesseract_data(data_result, text_to_find):
    """
    Creates coordinates for a box that surround the entire phrase we are searching for.
    """
    complete_phrase_found = 0
    x_data, y_data, w_data, h_data = ([] for i in range(4))  # initialize empty lists
    text_to_find = text_to_find.split(" ")  # transform into list of strings to prevent matching single characters below
    data_result = data_result.dropna()  # drop NaN results from dataframe (new lines, etc.)

    # transform relevant dataframe columns to lists
    text_list = data_result["text"].tolist()
    left_list = data_result["left"].tolist()
    top_list = data_result["top"].tolist()
    width_list = data_result["width"].tolist()
    height_list = data_result["height"].tolist()

    phrase_length = len(text_to_find)
    for i in range(0, len(text_list) - phrase_length + 1):
        if text_list[i] in text_to_find:
            for j in range(0, phrase_length):
                if text_list[i + j] == text_to_find[j]:
                    complete_phrase_found += 1
                else:
                    complete_phrase_found = 0
                    break
                if complete_phrase_found == phrase_length:
                    for k in range(i, i + j + 1):
                        x_data.append(left_list[k])
                        y_data.append(top_list[k])
                        w_data.append(width_list[k])
                        h_data.append(height_list[k])

    # calculate x, y, width, height of entire string (data_result is split by whitespace characters)
    x = min(x_data)  # calculate min x (top left coordinate of box)
    y = min(y_data)  # calculate min y (top left coordinate of box)
    w = max(x_data) - min(x_data) + max(w_data)  # calculate width of entire area
    h = max(y_data) - min(y_data) + max(h_data)  # calculate height of entire area

    return x, y, w, h


def __build_image_data(image_path, image_name):
    if not str.endswith(image_name, ".png"):
        print("Warning: image_name does not end with '.png'. Image must be .png format. "
              "Appending '.png' and continuing...")
        image_name += ".png"

    image_path = os.path.normpath(image_path)
    img_full_path = os.path.join(image_path, image_name)
    img = cv.imread(img_full_path)
    data = np.asarray(img)
    return img_full_path, img, data


# def main():
#
#     set_tesseract_cmd_path("C:\\Program Files\\Tesseract-OCR\\tesseract.exe")
#     # result = get_text_from_image("W:\\Temp\\test_ipc_images\\", "long_string.png")
#     # print(result)
#     # result = verify_text_in_image("W:\\Temp\\test_ipc_images\\", "long_string.png", "long string that")
#     # print(result)
#     result = verify_text_in_image_save_result("W:\\Temp\\test_ipc_images\\", "fuel.png", "Oil Life", r"W:\Temp\test_ipc_images", "result.png")
#     # result = get_text_coordinates_from_image("W:\\Temp\\test_ipc_images\\", "long_string.png", "long string that", True)
#     # print(result)
#
#
# if __name__ == '__main__':
#     print('Start Test')
#     main()
