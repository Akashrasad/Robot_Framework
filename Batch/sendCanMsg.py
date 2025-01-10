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
  temp=[]
  temp1=[]
  
  for i in range(1,len(sys.argv)):
    if sys.argv[i].isdigit():
      time.sleep(int(sys.argv[i]))
      print("wait",sys.argv[i])
    
    elif  '=' in sys.argv[i]:
      temp=sys.argv[i].split('=')
      print(temp)
      if 'RAW' == temp[0] or 'raw' == temp[0]:
        temp1=temp[1].split(',')
        print(temp1)
        entry  = {'Type': 'RAW', 'Mode': 'RAW', 'Id': temp1[0], 'Value': temp1[1]}
        payload_Tx.append(entry)
        print(entry)
      else:
        temp=sys.argv[i].split('=')
        print(temp)
        entry  = {'Type': 'Signal', 'Mode': 'HS', 'Name': temp[0], 'Value': temp[1]}
        payload_Tx.append(entry)
        #re.search( MyString2, MyString1 )
      print("msg",sys.argv[i])
      
 
  #entry  = {'Type': 'Signal', 'Mode': 'HS', 'Name': 'MovblTpServRqrdIO', 'Value': '1'}
  #payload_Tx.append(entry) 
  print(payload_Tx)
  _gmVehicleSim.open() # defaults to localhost and correct port, also waits until socket is ready

  try:
    # Tx          
    if _gmVehicleSim.send(  payload_Tx): # send
      pass

    time.sleep(0.125) # do not want to kill CPU, so play nice, but also go FAST...
  except Exception as ex:
    # Todo: better with reconnect and timeout and ....
    logger.error(ex)
    close(None, None)

""" Main   entry """
if __name__== "__main__":
  main()
  close(None,None)

