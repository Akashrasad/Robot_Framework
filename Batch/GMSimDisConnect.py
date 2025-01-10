# /********************************************************************************
#   This module to be used for rebooting the VCU and setting up ADB.
#
#   Input Arguments Expected
#   arg1 = Board type being used (CSMate/VCUMate/ECOMate)
#   arg2 = COM port connected via serial to VCU
# *********************************************************************************/
from pywinauto import application
import time
import serial
import sys


# clickPowerCycle() clicks on the Power Cycle button in Vehicle Simulator
def clickPowerCycle():
    app = application.Application(backend="uia")
    app.connect(title='Global A') 
    dlg_spec = app.window(title='Global A')
    path = "Connect->"+"EcoMate"+"->Disconnect"
    print(path)
    dlg_spec.menu_select(path)
    #if board == "EcoMate":
        #board = "EcoMate"
    #wn_set = board + "Settings"
    #dlg2_spec = app.window(title=wn_set)
    #dlg2_spec.child_window(best_match="Power Cycle").click()


if __name__ == '__main__':
    clickPowerCycle()
