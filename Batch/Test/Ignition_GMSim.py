from pywinauto import application
import serial
import serial.tools.list_ports as port_list
import builtins as __builtin__
import os, sys
import json
import pickle
import time
from datetime import datetime
import logging

# Basic logging setup
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger()
logger.addHandler(logging.StreamHandler())  # pass logging to console

# include module (in path)
sys.path.append("/GMVehicleSim")
from GMVehicleSim import *

_gmVehicleSim = GMVehicleSim()


payload_Tx = []
_gmVehicleSim.open() 
def close(sig, frame):  
  _gmVehicleSim.close()
signal.signal(signal.SIGINT, close)




def enableADBOnVCU(comPort):
    connected_port = comPort
    print(connected_port)
    ser = serial.Serial(connected_port)
    ser.baudrate = 115200
    print('started')
    ser.write(bytes(b'dtach -a /tmp/vmm\n'))
    ser.write(bytes(b'su\n'))
    ser.write(bytes(b'echo peripheral > /sys/bus/platform/devices/a800000.ssusb/mode\n'))
    ser.write(bytes(b'sleep 5\n'))
    ser.write(bytes(b'settings --user 0 put global adb_enabled 1\n'))
    ser.write(bytes(b'sleep 2\n'))
    print('Done')
    ser.close()

def getListOfCOMPorts():
     ports = list(port_list.comports())
     ports.sort()
     list_of_ports = []
     for port in ports:
       portstr=str(port)
       comport=portstr.split()
       connected_port=comport[0]
       list_of_ports.append(connected_port)
     return list_of_ports

def do_ignition():
    app = application.Application()
    app.connect(title='Global A')
    dlg_spec = app.window(title='Global A')
    dlg_spec.set_focus()
    print("Performing ignition OFF cycle on MY23 VCU")

    #time.sleep(60)
    #time.sleep(30)
    print("Performing ignition ON cycle on MY23 VCU")
    time.sleep(3)

    dlg_spec.child_window(best_match='Run').click()
    time.sleep(3)
    dlg_spec.child_window(best_match='Off').click()
    time.sleep(3)
    dlg_spec.child_window(best_match='Door Open').click()
    time.sleep(3)
    dlg_spec.child_window(best_match='Door Closed').click()
    time.sleep(3)
    


payload_Tx.clear()

if __name__ == '__main__':
    do_ignition()
    _gmVehicleSim.close()
   # ports=getListOfCOMPorts()
    #clickPowerCycle(sys.argv[1])
    #time.sleep(50)
    #enableADBOnVCU(ports[-1])

