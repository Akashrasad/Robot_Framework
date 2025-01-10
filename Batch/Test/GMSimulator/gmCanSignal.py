import builtins as __builtin__
import os, sys
import json
import pickle
import time
from datetime import datetime
import logging
# include module (in path)
sys.path.append("/GMVehicleSim")
from GMVehicleSim import *
_gmVehicleSim = GMVehicleSim()
logger=None

class gmCanSignal:
  def __init__(self):
    # Basic logging setup
    logging.basicConfig(level=logging.INFO)
    self.logger = logging.getLogger()
    self.logger.addHandler(logging.StreamHandler())  # pass logging to console

    microsecond_now = lambda: int(round(datetime.now().microsecond))
    #signal.signal(signal.SIGINT, close)

  def close(self,sig, frame):
    """
    Close (ctrl-c)
    Args:
        N/A
    Returns:
        None
    """  
    _gmVehicleSim.close() # Note: will finally close when log queue is empty (since is slower and has to catch-up)
    sys.exit(0)
   # register OS signal

  def send(self,payload):
    
    payload_Tx = payload
    
    print("Opening GM Vehicle simulator....")
    _gmVehicleSim.open()  # defaults to localhost and correct port, also waits until socket is ready
    
    try:
      # Tx
      if _gmVehicleSim.send(payload_Tx):# send
        for signal in payload_Tx:
          print("Sent:: "+str(signal))
        pass

      time.sleep(0.6) # do not want to kill CPU, so play nice, but also go FAST...
    except Exception as ex:
      # Todo: better with reconnect and timeout and ....
      logger.error(ex)
      close(None, None)

