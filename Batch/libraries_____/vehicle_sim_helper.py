from robot.libraries.BuiltIn import BuiltIn
from GMVehicleSim import *
import signals
from  libraries.cat_logging.cat_logging import CatLogging
from cat_config import *

logger = CatLogging.getLogger()

class VehicleSimHelper:
    _instance = None
    swc_buttons = {'default': '00006020', 'pushToTalk': '00006220', 'volumeUp': '00046020', 'volumeDown': '00086020',
                    'selectPress': '00006120', 'voiceCommunication': '00006820', 'leftPress': '00406020', 
                    'rightPress': '00806020', 'hangUpPress': '00106020', 'upPress': '00106020', 'downPress': '00206020',
                    'previousPress': '00016020', 'nextPress': '00026020', 'mutePress': '00006420', 'clusterView': '00007020',
                    'anyStuck': '0000E020', 'wheelUp': '00006060', 'wheelDown': '000060A0'}
    @staticmethod
    def getInstance():
        if VehicleSimHelper._instance == None:
            VehicleSimHelper()
        return VehicleSimHelper._instance
    
    def __init__(self):
        if VehicleSimHelper._instance != None:
            raise Exception("This class is a singleton!")
        else:
            VehicleSimHelper._instance = self
            self._gmVehicleSim = GMVehicleSim()
            self._shutdown = threading.Event()
            self._shutdown.clear()
            self._packet = None
            self.heartbeat = None
    def initialize_vehicle_sim(self):
        """
        Initializes GM Vehicle Simulator. This should run BEFORE any other vehicle simulator interaction.
        """
        logger.info("Initializing GM Vehicle Simulator...")
        global heartbeat
        heartbeat = Thread(target=self.heartbeat_handler, daemon=True)
        heartbeat.start()
        self._gmVehicleSim.on_receive(self.on_receive)
    def on_receive(self, packet):
        if packet['Name']:
            #print("RX: CAN ID: " + packet['Id'] + " Name: " + packet['Name'] + " Value: " + packet['value'] + "\n")
            global _packet
            _packet = packet
    def heartbeat_handler(self):
        while not self._shutdown.is_set():
            if not self._gmVehicleSim.is_connected():
                self._gmVehicleSim.open()
            else:
                time.sleep(2)
        time.sleep(2)
    def send_signal_update(self, signal_name_key, signal_value):
        """
        Sends a signal update through GM Vehicle Simulator.
        Args:
            plain_english_signal_name: signal name that should be sent to GM Vehicle Simulator.
            signal_value: signal value that should be sent to GM Vehicle Simulator.
    Returns:
        True: Signal update was sent successfully
        False: Signal update was NOT sent successfully
    """
        global _gmVehicleSim
        
        if signal_name_key in signals.signals:
            signal_name = signals.signals.get(signal_name_key, signal_name_key)
        else:
            logger.critical("Unable to send signal, " + signal_name_key + " does not exist in signals.py!")
            
        payload = [{'Type': 'Signal', 'Name': str(signal_name), 'Value': str(signal_value), 'Periodic': 'true'}]
        time.sleep(1)
        # send
        if len(payload) > 0 and self._gmVehicleSim.send(payload):
            logger.info('Payload: ' + str(payload))
            return True
        else:
            logger.critical("Unable to send signal update!")
            return False
        
 
# vehicle_sim_helper.VehicleSimHelper.send_signal_reboot(300)
    def send_signal_reboot(self, sleepTime=60):
        """
        Sends a VCU power cycle request to GM Vehicle Simulator.
        """
        payload  = [{'Type': 'VehicleSim', 'Name': 'mode', 'Value': 'reboot'}]
        time.sleep(3)
        # send
        if len(payload) > 0 and self._gmVehicleSim.send(payload):
            logger.info('Payload: ' + str(payload))
            logger.info("Power cycling VCU....sleep timer is "+str(sleepTime)+"...")
            time.sleep(int(sleepTime))
            return True
        else:
            logger.critical("Unable to send reboot signal to VCU!")
            return False
    def send_signal_update_oscil(self, signal_name_key1, signal_name_key2):
        signal_name1 = signals.signals[signal_name_key1]
        signal_name2 = signals.signals[signal_name_key2]
        flash = 1.5
        e_end=time.time()+60*3
        while (time.time() < e_end):
            logger.debug('reset loop')
            payload = [{'Type': 'Signal', 'Name': str(signal_name1), 'Value': '1', 'Periodic': 'true'}]
            if len(payload) > 0 and self._gmVehicleSim.send(payload):
                logger.debug('Payload: ' + str(payload))
            else:
                logger.debug("Unable to send signal update!")
            payload = [{'Type': 'Signal', 'Name': str(signal_name2), 'Value': '1', 'Periodic': 'true'}]
            if len(payload) > 0 and self._gmVehicleSim.send(payload):
                logger.debug('Payload: ' + str(payload))
            else:
                logger.debug("Unable to send signal update!")
            time.sleep(flash)
            payload = [{'Type': 'Signal', 'Name': str(signal_name1), 'Value': '0', 'Periodic': 'true'}]
            if len(payload) > 0 and self._gmVehicleSim.send(payload):
                logger.debug('Payload: ' + str(payload))
            else:
                logger.debug("Unable to send signal update!")
            payload = [{'Type': 'Signal', 'Name': str(signal_name2), 'Value': '0', 'Periodic': 'true'}]
            if len(payload) > 0 and self._gmVehicleSim.send(payload):
                logger.debug('Payload: ' + str(payload))
            else:
                logger.debug("Unable to send signal update!")
            time.sleep(flash)
        return True
    def set_gear(self, gear):
        """
        Sends a transmission gear update through GM Vehicle Simulator.
        Args:
            gear: Gear that should be sent to GM Vehicle Simulator. Can be 1 (park), 2 (reverse), 3 (neutral), or 4 (drive)
        Returns:
            True: Mode update was sent successfully
            False: Mode update was NOT sent successfully
        """
        payload = [{'Type': 'Signal', 'Name': 'TEGP_TrnsShftLvrPstnAuth_Inv', 'Value': '0', 'Periodic': 'true'},
                {'Type': 'Signal', 'Name': 'TEGP_TrnsShftLvrPstnAuth', 'Value': str(gear), 'Periodic': 'true'}]
        time.sleep(2)
        # send
        if len(payload) > 0 and self._gmVehicleSim.send(payload):
            logger.debug('Payload: ' + str(payload))
            return True
        else:
            logger.critical("Unable to send gear update!")
            return False
    def set_mode(self, mode):
        """
        Sends a mode update through GM Vehicle Simulator.
        Args:
            mode: Mode that should be sent to GM Vehicle Simulator. Can be
            off, acc, run, crank, propulsion, door_open_close
        Returns:
            True: Mode update was sent successfully
            False: Mode update was NOT sent successfully
        """
        payload = [{'Type': 'VehicleSim', 'Name': 'mode', 'Value': str(mode), 'Periodic': 'true'}]
        time.sleep(2)
        # send
        if len(payload) > 0 and self._gmVehicleSim.send(payload):
            logger.debug('Payload: ' + str(payload))
            return True
        else:
            logger.critical("Unable to send power mode update!")
            return False
        
    def send_swc(self, button, press = "short"):
        """
        Sends a SWC button press through GM Vehicle Simulator. 
        Args:
            button: The SWC button to be pressed. Can be default, pushToTalk, volumeUp, volumeDown, selectPress, voiceCommunication,
            leftPress, rightPress, hangUpPress, upPress, downPress, previousPress, nextPress, mutePress, clusterView, anyStuck,
            wheelUp, wheelDown.
            press: optional - long or short press
        """
        if press.lower() == "short":
            sleep = float(0.5)
        elif press.lower() == "long":
            sleep = float(3)
        else:
            logger.critical("send short or long press as argument!")
        # _gmVehicleSim.on_receive(on_receive) # register for on rx event
        
        if not self._gmVehicleSim.send([{'Id': '00','Mode': 'LIN',  'Value': self.swc_buttons[button], 'CommandID' : '0', 'TableIndex': '0', 'Port' : '0', 'Flags' : '1'}]): # slave (has data), on LIN port/channel 1
            logger.warn("Unable to send SWC button press!")
        
        time.sleep(sleep)
        #reset to default once send PTT
        self._gmVehicleSim.send([{'Id': '00','Mode': 'LIN',  'Value': self.swc_buttons['default'], 'CommandID' : '0', 'TableIndex': '0', 'Port' : '0', 'Flags' : '1'}]) # slave (has data), on LIN port/channel 1
        return
    def is_connected(self):
        return self._gmVehicleSim.is_connected()
    
    def close(self):
        self._gmVehicleSim.close()
        self._shutdown.set()
        heartbeat.join()
        return True
