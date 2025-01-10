from pywinauto import application
import pyautogui
import time
import serial
import sys


def PowerInput(): 
    
    app = application.Application()
    print("before setup option")
    app.connect(title='COM'+sys.argv[4]+' - Tera Term VT')
    print(sys.argv[4])
    #print("before setup option")
    dlg_spec = app.window(title='COM'+sys.argv[4]+' - Tera Term VT')
    dlg_spec.set_focus()
    #print("before setup option")
    #app.window(title='COM7 - Tera Term VT').MenuSelect("Setup->Terminal...")
    #print("after new setup option")
    pyautogui.hotkey('Alt', 's')
    time.sleep(1)
    pyautogui.hotkey('t')
    time.sleep(1)
    app.connect(title='Tera Term: Terminal setup')
    dlg_spec1 = app.window(title='Tera Term: Terminal setup')
    dlg_spec1.set_focus()
    print('after child connection')
   # app.window(title='Tera Term: Terminal setup').type_keys('CR')
   # dlg_spec1.type_keys('{DOWN}').select()
   # dlg_spec1.menu_select("CR+LF")
    pyautogui.hotkey('Alt', 'r')
    time.sleep(1)
    pyautogui.hotkey('ctrl', 'home')
    time.sleep(1)
    pyautogui.press('c')
    time.sleep(1)
    pyautogui.hotkey('Alt', 'm')
    time.sleep(1)
    pyautogui.hotkey('ctrl', 'home')
    time.sleep(1)
    pyautogui.press('c')
    pyautogui.hotkey('Alt', 'L')
    time.sleep(1)
    pyautogui.press('enter')


   # n = pyautogui.locateCenterOnScreen("//localecho.PNG", confidence=0.9)
   # print(n)

   # if n is not None:
   #    pyautogui.click(n)

   # pyautogui.press('enter')

    time.sleep(2)
    payload_Tx = []
    data = []
    
   # dlg_spec.set_focus()
    pyautogui.typewrite("Ch 1")
    pyautogui.press('enter')
    time.sleep(2)
  #  pyautogui.write(bytes(b'input keyevent KEYCODE_ENTER\n'))  
   # pyautogui.write(bytes(b'input keyevent KEYCODE_ENTER\n'))
    pyautogui.typewrite("so:vo " + sys.argv[1])
    pyautogui.press('enter')
    time.sleep(1)
    pyautogui.typewrite("so:vo " + sys.argv[2])
    pyautogui.press('enter')
    time.sleep(1)
    pyautogui.typewrite("so:vo " + sys.argv[3])
    pyautogui.press('enter')
    time.sleep(1)
    #pyautogui.typewrite("so:cu " + sys.argv[2])
    #pyautogui.press('enter')
    #time.sleep(6)
    pyautogui.hotkey('Alt', 'F4')
    time.sleep(1)
   # pyautogui.write(bytes(b'input keyevent KEYCODE_ENTER\n'))

PowerInput()
time.sleep(2)
