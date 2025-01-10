import cv2
import numpy as np
import pyautogui

def imageClick(image_path):
    try:
        # Load the image
        template = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)
        if template is None:
            raise FileNotFoundError("Image file not found or cannot be read")

        # Take screenshot
        screenshot = pyautogui.screenshot()

        # Convert screenshot to OpenCV format
        screenshot = cv2.cvtColor(np.array(screenshot), cv2.COLOR_RGB2BGR)
        gray_screenshot = cv2.cvtColor(screenshot, cv2.COLOR_BGR2GRAY)

        # Match template
        result = cv2.matchTemplate(gray_screenshot, template, cv2.TM_CCOEFF_NORMED)

        # Get location of the best match
        _, max_val, _, max_loc = cv2.minMaxLoc(result)

        # Threshold for considering a match
        threshold = 0.8  # You can adjust this threshold as needed

        if max_val >= threshold:
            # Calculate center of the matched image
            h, w = template.shape
            center_x = max_loc[0] + w // 2
            center_y = max_loc[1] + h // 2

            # Click on the center of the matched image
            pyautogui.click(x=center_x, y=center_y)
            print("Image clicked successfully")
        else:
            print("No match found above the threshold")

    except Exception as e:
        print(f"Error occurred: {e}")

# Example usage:
image_path = 'D:\target_test_CLEA_64bit\Batch\images.png'  # Path to your image file
imageClick(image_path)
