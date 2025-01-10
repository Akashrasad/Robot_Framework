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


from GMVehicleSim import *
# include module (in path)
sys.path.append("/GMVehicleSim")
_gmVehicleSim = GMVehicleSim()

def close(sig, frame):  
  _gmVehicleSim.close()
signal.signal(signal.SIGINT, close)

payload_Tx = []
entry = {'Type': 'VehicleSim', 'Name': 'mode', 'Value': 'off'}#off,acc,run,crank
payload_Tx.append(entry)
time.sleep(5)
entry = {'Type': 'VehicleSim', 'Name': 'mode', 'Value': 'door_open_close'}#Door Open
payload_Tx.append(entry)
time.sleep(5)
entry = {'Type': 'VehicleSim', 'Name': 'mode', 'Value': 'door_open_close'}#Door Close
payload_Tx.append(entry)
def main():
  _gmVehicleSim.open(blocking=False) # defualts to localhost and correct port, also waits until socket is ready
  for entry in payload_Tx:
    if not _gmVehicleSim.send([entry]): # send
      pass
    time.sleep(1)
  
 

""" Main Entry """
if __name__== "__main__":
  main()
  close(None,None)
