import cv2 as cv
import numpy as np
import os, time, sys
from robot.libraries.BuiltIn import BuiltIn
from skimage.metrics import structural_similarity
from skimage.color import deltaE_cie76
from skimage.color import rgb2lab
from pathlib import Path
sys.path.append(str(Path(os.path.abspath(os.path.dirname(__file__))).parents[0]))
import libraries.utilities as utils
from libraries.cat_logging.cat_logging import CatLogging

logger = CatLogging.getLogger()

def crop_image(image_path, image_name, cropped_image_path, cropped_image_name, x, y, width, height):
    """
    Crops an image given (x,y), height and width parameters. This gives the ability to focus on a certain region
    of interest, which improves OCR and image recognition accuracy.
    Args:
        image_path: path to image to crop
        image_name: name of image to crop
        cropped_image_path: name of cropped image result
        cropped_image_name: path to save cropped image result
        x: starting x coordinate
        y: starting y coordinate
        width: width to crop
        height: height to crop

    Returns:

    """
    if not str.endswith(image_name, ".png"):
        print("Warning: image_name does not end with '.png' "
              "Appending '.png' and continuing...")
        image_name += ".png"

    if not str.endswith(cropped_image_name, ".png"):
        print("Warning: cropped_image_name does not end with '.png' "
              "Appending '.png' and continuing...")
        cropped_image_name += ".png"

    img_full_path = os.path.join(image_path, image_name)
    img = cv.imread(img_full_path)
    img_cropped = img[int(y):(int(y)+int(height)), int(x):(int(x)+int(width))]  # crop image using array slicing
    cropped_image_full_path = os.path.join(cropped_image_path, cropped_image_name)
    if cv.imwrite(cropped_image_full_path, img_cropped):
        print("Cropped {} with coordinates ({}, {}) with {} width and {} height.".format(image_name, x, y, width,
                                                                                              height))
        print("Saved cropped image to {}".format(cropped_image_full_path))
        return True
    else:
        print("Error saving cropped image to {}".format(cropped_image_full_path))

def verify_image_by_reference(image_path, image_name, ref_image_path, ref_image_name, threshold, save_result=False,
                              result_path="", result_name="", cluster_view=None, is_android=False):
    """
    Searches for a reference image within a given image.
    Args:
        image_path: path to image to search
        image_name: image filename
        ref_image_path: path to reference image
        ref_image_name: reference image filename
        threshold: threshold for verification. A higher value is more strict (0 - 0.99)
        save_result: True/False - save image as evidence of verification (green box around reference image that was found)
        result_path: folder path to save result image with highlight of reference image
        result_name: name of results image file (.png)
    Returns:
        True - reference image was found in the image.
        False - reference image was NOT found in the image.
    """
    image_name = utils.verify_png_extension(image_name)
    ref_image_name = utils.verify_png_extension(ref_image_name)
    result_name = utils.verify_png_extension(result_name)

    if cluster_view is None:
        cluster_view = BuiltIn().get_variable_value("${cluster_view}")

    if not is_android:
        ref_full_path = os.path.join(ref_image_path, cluster_view, ref_image_name)
        img_full_path = os.path.join(image_path, cluster_view, image_name)
        cv_result_path = os.path.join(result_path, cluster_view)
    else:
        ref_full_path = os.path.join(ref_image_path, utils.ANDROID_SCREENSHOTS, ref_image_name)
        img_full_path = os.path.join(image_path, utils.ANDROID_SCREENSHOTS, image_name)
        cv_result_path = os.path.join(result_path, utils.ANDROID_SCREENSHOTS)

    if not Path(ref_full_path).is_file():
        logger.error("Reference image {} does not exist! Unable to verify.. skipping..".format(ref_full_path))
        return False

    img = cv.imread(img_full_path, 0)
    template = cv.imread(ref_full_path, 0)

    if img is None:
        raise Exception(f"result image located at {img_full_path} can't be found or at a wrong format")

    if template is None:
        raise Exception(f"reference image located at {ref_full_path} can't be found or at a wrong format")

    print("Searching '{}' with reference image '{}':".format(img_full_path, ref_full_path))
    result = cv.matchTemplate(img, template, cv.TM_CCOEFF_NORMED)

    if np.amax(result) > float(threshold):
        print("Reference image '{}' found in '{}' with threshold '{}'".format(ref_full_path, img_full_path, threshold))
        if save_result:
            if not os.path.exists(result_path):
                os.makedirs(result_path)
            img_color = cv.imread(img_full_path)
            result_full_path = os.path.join(result_path, result_name)
            w, h = template.shape[::-1]
            min_val, max_val, min_loc, max_loc = cv.minMaxLoc(result)
            top_left = max_loc
            bottom_right = (top_left[0] + w, top_left[1] + h)
            cv.rectangle(img_color, top_left, bottom_right, (0, 255, 0), 2)
            if cv.imwrite(os.path.join(cv_result_path, result_name), img_color):
                print("Saved result image to {}".format(cv_result_path))
                return True
            else:
                print("Error saving result image to {}".format(cv_result_path))
        return True

    print("Reference image '{}' NOT found in '{} with threshold '{}''".format(ref_full_path, img_full_path, threshold))
    return False


def verify_image_by_reference_collection(image_path, image_name, ref_collection_path, threshold, save_result=False,
                                         result_path="", result_name=""):
    """
    Searches for a collection of reference images contained in a folder within a given image. This is meant to search
    for multiple variations of the same image to increase robustness of the verification process.
    Args:
        image_path: path to image to search
        image_name: image filename
        ref_collection_path: path to folder containing reference images
        threshold: threshold for verification. A higher value is more strict (0 - 0.99)
        save_result: True/False - save image as evidence of verification (green box around reference image that was found)
        result_path: folder path to save result image with highlight of reference image
        result_name: name of results image file (.png)
    Returns:
        True - a reference image from the folder was found in the image.
        False - a reference image from the folder was NOT found in the image.
    """
    if not str.endswith(image_name, ".png"):
        print("Warning: image_name does not end with '.png'. Image must be .png format. "
              "Appending '.png' and continuing...")
        image_name += ".png"

    img_full_path = os.path.join(image_path, image_name)
    ref_collection_full_path = os.path.abspath(ref_collection_path)

    img = cv.imread(img_full_path, 0)

    print("Searching '{}' with reference image collection '{}':".format(img_full_path, ref_collection_full_path))
    for ref in os.listdir(ref_collection_full_path):  # loop through all images in the folder
        if ref.endswith(".png"):
            template = cv.imread(os.path.join(ref_collection_full_path, ref), 0)
            result = cv.matchTemplate(img, template, cv.TM_CCOEFF_NORMED)
            if np.amax(result) > float(threshold):
                print("Reference image '{}' found in '{}' with threshold '{}'".format(ref, img_full_path, threshold))
                if save_result:
                    img_color = cv.imread(img_full_path)
                    result_full_path = os.path.join(result_path, result_name)
                    w, h = template.shape[::-1]
                    min_val, max_val, min_loc, max_loc = cv.minMaxLoc(result)
                    top_left = max_loc
                    bottom_right = (top_left[0] + w, top_left[1] + h)
                    cv.rectangle(img_color, top_left, bottom_right, (0, 255, 0), 2)
                    if cv.imwrite(os.path.join(result_path, result_name), img_color):
                        print("Saved result image to {}".format(result_full_path))
                        return True
                    else:
                        print("Error saving result image to {}".format(result_full_path))
                return True
            else:
                print("Reference image '{}' NOT found in '{} with threshold '{}''".format(ref, img_full_path,
                                                                                          threshold))
        else:
            print("Error: Images must be in .png format.")
    return False


def get_coordinates_by_reference_image(image_path, image_name, ref_image_path, ref_image_name, threshold, cluster_view=None,
                                       centered_coordinates=False) -> tuple[int, int] | tuple[int, int, int, int] | bool:
    """
    Searches for a reference image within a given image and returns the coordinates.
    Args:
        image_path: path to image to search
        image_name: image filename
        ref_image_path: path to reference image
        ref_image_name: reference image filename
        threshold: threshold for verification. A higher value is more strict (0 - 0.99)
        centered_coordinates: True/False - return centered coordinates of the box containing the reference image
    Returns:
        False: text was not found
        x, y, w, h: x-axis, y-axis, width, and height
        x_centered, y_centered: centered x and y axis coordinates for the box containing the reference image
    """
    image_name = utils.verify_png_extension(image_name)
        
    if cluster_view is None:
        cluster_view = BuiltIn().get_variable_value("${cluster_view}")

    img_full_path = os.path.join(image_path, cluster_view, image_name)
    ref_full_path = os.path.join(ref_image_path, ref_image_name)

    if not Path(ref_full_path).is_file():
        logger.error("Reference image {} does not exist! Unable to get coordinates.. skipping..".format(ref_full_path))
        return False
    
    if not Path(img_full_path).is_file():
        logger.error("Dynamic image {} does not exist! Unable to get coordinates.. skipping..".format(img_full_path))
        return False

    img = cv.imread(img_full_path, 0)
    template = cv.imread(ref_full_path, 0)

    w, h = template.shape[::-1]  # height and width of reference image

    print("Searching '{}' with reference image '{}' and returning coordinates:".format(img_full_path, ref_full_path))
    result = cv.matchTemplate(img, template, cv.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv.minMaxLoc(result)

    x, y = max_loc  # top left x and y coordinate of result

    if np.amax(result) > float(threshold):
        if centered_coordinates:
            x_centered = round(x + (w / 2))
            y_centered = round(y + (h / 2))
            print("Reference image '{}' found in '{}' with threshold '{}'".format(ref_full_path, img_full_path,
                                                                                  threshold))
            print("Coordinates of '{}': {}, {}, {}, {} (x, y, w, h)".format(ref_image_name, x, y, w, h))
            print("Centered coordinates are: {}, {} (x, y)".format(x_centered, y_centered))
            return x_centered, y_centered
        else:
            print("'{}' found in '{}'".format(ref_image_name, image_name))
            print("Coordinates of '{}': {}, {}, {}, {} (x, y, w, h)".format(ref_image_name, x, y, w, h))
            return x, y, w, h

    else:
        print("Reference image '{}' NOT found in '{} with threshold '{}''".format(ref_full_path, img_full_path,
                                                                                  threshold))
        return False


def get_coordinates_by_reference_image_collection(image_path, image_name, ref_collection_path, threshold,
                                                  centered_coordinates=False):
    """
    Searches for a reference image within a given image and returns the coordinates.
    Args:
        image_path: path to image to search
        image_name: image filename
        ref_collection_path: path to reference image collection
        threshold: threshold for verification. A higher value is more strict (0 - 0.99)
        centered_coordinates: True/False - return centered coordinates of the box containing the reference image
    Returns:
        False: text was not found
        x, y, w, h: x-axis, y-axis, width, and height
        x_centered, y_centered: centered x and y axis coordinates for the box containing the reference image
    """
    if not str.endswith(image_name, ".png"):
        print("Warning: image_name does not end with '.png'. Image must be .png format. "
              "Appending '.png' and continuing...")
        image_name += ".png"

    img_full_path = os.path.join(image_path, image_name)
    ref_collection_full_path = os.path.abspath(ref_collection_path)

    print("Searching '{}' with reference image collection '{}' "
          "and returning coordinates:".format(img_full_path, ref_collection_full_path))
    for ref in os.listdir(ref_collection_full_path):  # loop through all images in the folder
        if ref.endswith(".png"):
            img = cv.imread(img_full_path, 0)
            template = cv.imread(os.path.join(ref_collection_full_path, ref), 0)
            result = cv.matchTemplate(img, template, cv.TM_CCOEFF_NORMED)
            min_val, max_val, min_loc, max_loc = cv.minMaxLoc(result)
            x, y = max_loc  # top left x and y coordinate of result
            w, h = template.shape[::-1]  # height and width of reference image

            if np.amax(result) > float(threshold):
                if centered_coordinates:
                    x_centered = round(x + (w / 2))
                    y_centered = round(y + (h / 2))
                    print("Reference image '{}' found in '{}' with threshold '{}'".format(ref, img_full_path,
                                                                                          threshold))
                    print("Coordinates of '{}': {}, {}, {}, {} (x, y, w, h)".format(ref, x, y, w, h))
                    print("Centered coordinates are: {}, {} (x, y)".format(x_centered, y_centered))
                    return x_centered, y_centered
                else:
                    print("'{}' found in '{}'".format(ref, image_name))
                    print("Coordinates of '{}': {}, {}, {}, {} (x, y, w, h)".format(ref, x, y, w, h))
                    return x, y, w, h

            else:
                print("Reference image '{}' NOT found in '{} with threshold '{}''".format(ref, img_full_path,
                                                                                          threshold))
        else:
            print("Error: Images must be in .png format.")
    return False


def verify_image_by_reference_collection_hazard(image, ref_collection_path, count, x, result_path, iteration_num):
    """
    Searches for a collection of hazard reference images contained in a folder within a given image. This is meant to search
    for multiple variations of the same image to increase robustness of the verification process.
    Args:
        image: live image to search
        ref_collection_path: path to folder containing reference images
        count,x, iteration_num : arguments passed from hazard_lights_check
        result_path: folder path to save result image with highlight of reference image
    Returns:
        True - a reference image from the folder was found in the image.
        False - a reference image from the folder was NOT found in the image.
    """
    for ref in os.listdir(ref_collection_path):  # loop through all images in the folder
        template = cv.imread(os.path.join(ref_collection_path, ref), 0)
        img_gray = cv.cvtColor(image, cv.COLOR_BGR2GRAY)

        w, h = template.shape[::-1]

        result = cv.matchTemplate(img_gray, template, cv.TM_CCOEFF_NORMED)
        threshold = 0.9
        loc = np.where(result >= threshold)

        for pt in zip(*loc[::-1]):
            cv.rectangle(image, pt, (pt[0] + w, pt[1] + h), (0, 0, 255), 2)
            if x == 'left':
                pass
            elif x == 'right':
                cv.imwrite(result_path + str(iteration_num) + '\\' + 'item_right_{0}_{1}.png'.format(count,
                                                                            time.strftime('%Y%m%d-%H%M%S')), image)
            else:
                return False
            return True
        return False
    
def find_difference_in_images(image_path_1, image_filename_1, image_path_2, image_filename_2, save_location, cluster_view, is_android=False):
    logger.info("Attempting to find the difference between {} and {}".format(image_filename_1, image_filename_2))
    
    image_filename_1 = utils.verify_png_extension(image_filename_1)
    image_filename_2 = utils.verify_png_extension(image_filename_2)
    if not is_android:
        image_full_path_1 = os.path.join(image_path_1, cluster_view, image_filename_1)
        image_full_path_2 = os.path.join(image_path_2, cluster_view, image_filename_2)
        save_location = os.path.join(save_location, cluster_view)
    else:
        image_full_path_1 = os.path.join(image_path_1, utils.ANDROID_SCREENSHOTS, image_filename_1)
        image_full_path_2 = os.path.join(image_path_2, utils.ANDROID_SCREENSHOTS, image_filename_2)
        save_location = os.path.join(save_location, cluster_view)

    if not Path(image_full_path_1).is_file():
        logger.critical("Image {} does not exist! Unable to verify.. skipping..".format(image_full_path_1))
    
    if not Path(image_full_path_2).is_file():
        logger.critical("Image {} does not exist! Unable to verify.. skipping..".format(image_full_path_2))
    
    # Load images
    left = cv.imread(image_full_path_1)
    right = cv.imread(image_full_path_2)
    
    #### IMAGE STRUCTURAL DIFFERENCES ####

    # Convert images to grayscale
    left_gray = cv.cvtColor(left, cv.COLOR_BGR2GRAY)
    right_gray = cv.cvtColor(right, cv.COLOR_BGR2GRAY)

    # Compute Structural Similarity Index (SSIM) between the two images
    (score, diff) = structural_similarity(left_gray, right_gray, full=True)
    print("Image Similarity: {:.4f}%".format(score * 100))

    # The diff image contains the actual image differences between the two images
    # and is represented as a floating point data type in the range [0, 1]
    # so we must convert the array to 8-bit unsigned integers in the range
    # [0, 255] before we can use it with OpenCV
    diff = (diff * 255).astype("uint8")
    diff_box = cv.merge([diff, diff, diff])

    # Threshold the difference image, followed by finding contours to
    # obtain the regions of the two input images that differ
    thresh = cv.threshold(diff, 0, 255, cv.THRESH_BINARY_INV | cv.THRESH_OTSU)[1]
    contours = cv.findContours(thresh, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE)
    contours = contours[0] if len(contours) == 2 else contours[1]

    logger.info("Creating boundary boxes for structural differences in Red")
    for c in contours:
        area = cv.contourArea(c)
        if area > 40:
            x, y, w, h = cv.boundingRect(c)
            cv.rectangle(diff_box, (x, y), (x + w, y + h), (0, 0, 255), 3)
    
    # Creating result image
    result_image = os.path.join(save_location, f"{image_filename_2}_diff_{image_filename_1}.png")  
    cv.imwrite(result_image, diff_box)
    
    ### IMAGE COLOR DIFFERENCES ###
    
    # Convert the images to CIELab color space
    left_lab = rgb2lab(left)
    right_lab = rgb2lab(right)
    
     # Calculate the color difference using the CIE76 distance formula
    color_diff = deltaE_cie76(left_lab, right_lab)
    
    # Calculate the color similarity score using number of pixels under just-noticable difference (JND). 
    # A distance of ~2.3 is the amount a color must change for a difference to be noticeable
    jnd = 2.3
    color_score = (np.sum(color_diff < jnd) / color_diff.size)
    print("Image Color Similarity: {:.4f}%".format(color_score * 100))
    
    # Convert array to 8-bit unsigned integer
    color_diff = (color_diff).astype("uint8")

    # Apply a JND threshold to create a binary mask, followed by finding contours to
    # obtain the regions of the two input images that differ in color
    _, thresholded = cv.threshold(color_diff, jnd, 255, cv.THRESH_BINARY)
    contours = cv.findContours(thresholded, cv.RETR_EXTERNAL, cv.CHAIN_APPROX_SIMPLE)
    contours = contours[0] if len(contours) == 2 else contours[1]
    
    logger.info("Creating boundary boxes for color differences in Blue")
    for c in contours:
        area = cv.contourArea(c)
        if area > 40:
            x, y, w, h = cv.boundingRect(c)
            cv.rectangle(diff_box, (x, y), (x + w, y + h), (255, 0, 0), 2)
    
    cv.imwrite(result_image, diff_box)
    logger.info("Difference result image of {} and {} saved to {}".format(image_filename_1, image_filename_2, result_image))

    
    
    
    

