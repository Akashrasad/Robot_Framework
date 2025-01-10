import builtins as __builtin__
import glob
import os, sys
import json
import pickle
import time
from datetime import datetime
import logging

from pywinauto import application
import warnings
import configparser
#from weCanSim import *
'''
Usage 
     $python sendCanSignal.py predelay signalName=value postdelay 
EX:: $python sendCanSignal.py 1 signalName1=1 2 3 signalName2=2 3
'''
# Basic logging setup
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger()
logger.addHandler(logging.StreamHandler())  # pass logging to console

#Changing directory to Batch folder
cwd = os.getcwd()
#os.chdir(cwd+'/Batch')
os.chdir(cwd)


#Getting configuration values from config.ini
configParser = configparser.RawConfigParser()   
configFilePath = r'config.ini'
configParser.read(configFilePath)
simulator_Name = configParser.get('config', 'Simulator_Name')



if simulator_Name.lower()=="gmvehiclesim":
  # include module (in path)
  sys.path.append("/GMVehicleSim")
  from GMVehicleSim import *
  _gmVehicleSim = GMVehicleSim()
elif simulator_Name.lower()=="wecansim":
  #Change directory to WeCanSim folder. 
  sys.path.append("./WeCanSim")
  from weCanSim import *
  cwd = os.getcwd()+"/WeCanSim"
  os.chdir(cwd)
  #Access the weCanSim class
  _wecan=weCanSim()

#microsecond_now = lambda: int(round(datetime.now().microsecond))

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
if simulator_Name.lower()=="gmvehiclesim":
  signal.signal(signal.SIGINT, close)

# Template as starting point to build off of... 
def main():
  if simulator_Name.lower()=="gmvehiclesim":
    # Example:
    payload_Tx = []
    data=[]
    _gmVehicleSim.open()# defaults to localhost and correct port, also waits until socket is ready
    try:
      for i in range(1,len(sys.argv)): 
        if sys.argv[i].isdigit():
          time.sleep(int(sys.argv[i]))#sendSysPwrMd
        elif "SysPwrMd" in sys.argv[i].lower():
          #pywinauto script
          pm_mode=sys.argv[i].split("=")
          val=pm_mode[1]
          pmModeChange(val)   #To change the Power mode i.e., RUN,OFF,ACC,Propulsion
        elif "spmp_syspwrmodeauth" in sys.argv[i].lower():
          #pywinauto script
          pm_mode=sys.argv[i].split("=")
          val=pm_mode[1]
          pmModeChange(val)   #To change the Power mode i.e., RUN,OFF,ACC,Propulsion
          
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
    close(None,None)
  elif simulator_Name.lower()=="wecansim":
    payload_Tx = []
    data=[]
    try:
      for i in range(1,len(sys.argv)): 
        if sys.argv[i].isdigit():
          entry  = '{"Delay": "'+sys.argv[i]+'"}' 
          payload_Tx.append(entry)
          
        elif  '=' in sys.argv[i]:
          #print("Periodic block")
          data=sys.argv[i].split('=') #splitting the "signalName" and "signalValue"
          entry  ='{"Type" : "Signal","Mode" : "HS","name" : "'+str(data[0])+'","Value" :"'+str(data[1])+'"}'
          print("Entry ",entry)
          payload_Tx.append(entry)
          
          
      #Sending Can signals
      _wecan.send(payload_Tx)
  
          # filepath=open(r"WeCanSim")
          # from WeCanSim import WeCAN

      
            
   
    except Exception as ex:
      print("Problem at sending the can signal using WecanSimulator")
      print(ex)
      
      
    
def pmModeChange(val):
  app = application.Application()
  time.sleep(1)
  app.connect(title='Global B')
  dlg_spec = app.window(title='Global B')
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
  

