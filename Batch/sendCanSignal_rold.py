import builtins as __builtin__
import os, sys
import json
import pickle
import time
from datetime import datetime
import logging

from pywinauto import application
import warnings
'''
Usage 
     $python sendCanSignal.py predelay signalName=value postdelay 
EX:: $python sendCanSignal.py 1 signalName1=1 2 3 signalName2=2 3
''' 
# Basic logging setup
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger()
logger.addHandler(logging.StreamHandler())  # pass logging to console

# include module (in path)
sys.path.append("/GMVehicleSim")
from GMVehicleSim import *

_gmVehicleSim = GMVehicleSim()

microsecond_now = lambda: int(round(datetime.now().microsecond))

def close(sig, frame):
  """
  Close (ctrl-c)
  Args:
      N/A
  Returns:
      None
  """  
  _gmVehicleSim.close() # Note: will finally close when log queue is empty (since is slower and has to catch-up)
  sys.exit(0)
signal.signal(signal.SIGINT, close) # register OS signal

# Template as starting point to build off of... 
def main():
  
  # Example:
  payload_Tx = []
  data=[]
  _gmVehicleSim.open()# defaults to localhost and correct port, also waits until socket is ready
  try:
    for i in range(1,len(sys.argv)): 
      if sys.argv[i].isdigit():
        time.sleep(int(sys.argv[i]))#send
      elif "spmp_syspwrmodeauth" in sys.argv[i].lower():
        #pywinauto script
        pm_mode=sys.argv[i].split("=")
        val=pm_mode[1]
        pmModeChnage(val)   #To change the Power mode i.e., RUN,OFF,ACC,Propulsion
        
      elif  '=' in sys.argv[i]:
        if not 'true' in sys.argv[i] and not 'false' in sys.argv[i]:
          data=sys.argv[i].split('=') #splitting the "signalName" and "signalValue"
          entry  = {'Type': 'Signal', 'Mode': 'HS', 'Name': str(data[0]), 'Value': str(data[1])}
          payload_Tx.append(entry)
          
        elif 'true' in sys.argv[i] or 'false' in sys.argv[i]:
          data=sys.argv[i].split('=')
          entry  = {'Type': 'Signal','Name': str(data[0]), 'Value': str(data[1]),'Periodic': str(data[2])}
          payload_Tx.append(entry)
          print('periodic CAN signal')
        
        if _gmVehicleSim.send(payload_Tx): # send
            pass
        
        #time.sleep(0.125) # do not want to kill CPU, so play nice, but also go FAST.
        payload_Tx.clear()#clearing the list
 
  except Exception as ex:
    # Todo: better with reconnect and timeout and ....
    logger.error(ex)
    close(None, None)
def pmModeChnage(val):
  app = application.Application()
  time.sleep(1)
  app.connect(title='VCU')
  dlg_spec = app.window(title='VCU')
  dlg_spec.set_focus()
  if val == "2" :
    dlg_spec.child_window(best_match='Run').click()
    time.sleep(1)
  elif val == "1":
    dlg_spec.child_window(best_match='Acc').click()
    time.sleep(1)
  elif val == "0" :
    dlg_spec.child_window(best_match='Off').click()
    time.sleep(1)
  elif val == "3" :
    dlg_spec.child_window(best_match='Crank').click()
    time.sleep(1)
  elif val == "4" :
    dlg_spec.child_window(best_match='Propulsion').click()
    time.sleep(1)
  else :
    print(" no power mode is selected")

  

""" Main   entry """
if __name__== "__main__":
  main()
  close(None,None)

