import pyautogui
import time

def scroll_down(amount=500, wait_time=2):
    """
    Scrolls down using the mouse wheel.

    :param amount: The number of "clicks" to scroll down. Positive values scroll up, negative scroll down (default is 500).
    :param wait_time: Time to wait after the scroll in seconds (default is 2).
    """
    try:
        # Scroll down by the specified amount
        pyautogui.scroll(-abs(amount))  # Ensure negative value for scrolling down
        # Wait after the scroll
        time.sleep(wait_time)
    except Exception as e:
        print(f"An error occurred while scrolling: {e}")

def scroll_up(amount=500, wait_time=2):
    """
    Scrolls up using the mouse wheel.

    :param amount: The number of "clicks" to scroll up. Positive values scroll up, negative scroll down (default is 500).
    :param wait_time: Time to wait after the scroll in seconds (default is 2).
    """
    try:
        # Scroll up by the specified amount
        pyautogui.scroll(abs(amount))  # Ensure positive value for scrolling up
        # Wait after the scroll
        time.sleep(wait_time)
    except Exception as e:
        print(f"An error occurred while scrolling: {e}")

# Example usage
# if __name__ == "__main__":
#     scroll_down()
# scroll_up()
