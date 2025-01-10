# import pyautogui

# # Maximize the current window (Windows-specific)
# pyautogui.hotkey('win', 'up')

# # Alternatively, use F11 for full screen (works on browsers and some apps)
# pyautogui.press('f11')
# import ctypes
# import win32gui
# import win32con

# # Find the window handle by title (Replace 'YourWindowTitle' with the actual title)
# hwnd = win32gui.FindWindow(None, "MainWindow")

# if hwnd:
#     # Maximize the window
#     ctypes.windll.user32.ShowWindow(hwnd, win32con.SW_MAXIMIZE)
# else:
#     print("Window not found!")
import ctypes
import win32gui
import win32con

def maximize_window(window_title):
    """
    Maximize a window by its title.

    Args:
        window_title (str): The title of the window to maximize.
    """
    # Find the window handle by title
    hwnd = win32gui.FindWindow(None, window_title)

    if hwnd:
        # Maximize the window
        ctypes.windll.user32.ShowWindow(hwnd, win32con.SW_MAXIMIZE)
        print(f"Window '{window_title}' maximized successfully.")
    else:
        print(f"Window '{window_title}' not found!")

