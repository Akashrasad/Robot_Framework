from ctypes import cdll, c_char_p
import configparser
import sys
import os
import time
import json



class weCanSim:
    def __init__(self):
        #Getting the current directory
        self.cwd = os.getcwd()
        self.exctdll=None
        print("Loading WeCan.....")
        self.exctdll = cdll.LoadLibrary(self.cwd+str('\WeCAN.dll'))

        #Getting configuration values from config.ini
        configParser = configparser.RawConfigParser()   
        configFilePath = r'config.ini'
        configParser.read(configFilePath)
        simulator_Name = configParser.get('config', 'Simulator_Name')
        windows_flag = configParser.get('config', 'Windows')
        vip_version=configParser.get('config', 'VIP_version')
        arxml_fileName = configParser.get('config', 'ARXML_FileName')
        dbc_fileName=configParser.get('config', 'DBC_FileName')
        
        db_file=self.cwd+str('\\'+dbc_fileName)
                self.exctdll.wecan_load_database(db_file.encode('utf-8'))
                #For GA Hardware 
                if windows_flag.lower() == "n":
                    print("Opening WeCan.....")
                    self.exctdll.wecan_open()
                    self.ga_default()
                    print("Send:: "+str(signal))
                    b_string = signal.encode('utf-8')
                    #Sending Can signals
                    self.exctdll.wecan_send(b_string)
                    time.sleep(0.5)
               
    def send(self,arxml_fileName,dbc_fileName,windows_flag,vip_version,payload):
        #Loading WeCan dll and changing the arguments type
        
        #self.exctdll = cdll.LoadLibrary(self.cwd+str('\WeCAN_12_04_21_v2.dll'))
        #self.exctdll = cdll.LoadLibrary(self.cwd+str('\WeCAN.dll'))
        self.exctdll.wecan_load_database.argtypes = [c_char_p]
        self.exctdll.wecan_send.argtypes = [c_char_p]
        
        if windows_flag.lower() == "y" or windows_flag.lower() == "n":
            if vip_version.lower()=="ga":
                db_file=self.cwd+str('\\'+dbc_fileName)
                self.exctdll.wecan_load_database(db_file.encode('utf-8'))
                #For GA Hardware 
                if windows_flag.lower() == "n":
                    print("Opening WeCan.....")
                    self.exctdll.wecan_open()
                    self.ga_default()
            elif vip_version.lower()=="gb":
                db_file=self.cwd+str('\\'+arxml_fileName)
                self.exctdll.wecan_load_database(db_file.encode('utf-8'))
                #For GB Hardware
                if windows_flag.lower() == "n":
                    print("Opening WeCan.....")
                    self.exctdll.wecan_open()
                    self.gb_default()
            else:
                print("<<<<<<<---Mode must be GA or GB, Signals sending process failed ....terminating--->>>>>>>>")
                sys.exit()
        else:
            print("<<<<<<<---Environment type must be Hardware(N) or Windows(Y), Signals sending process failed ....terminating--->>>>>>>>")
            sys.exit()
          
        try:
            for signal in payload:
                if 'Delay' in signal:
                    jstr=json.loads(signal)
                    print("Waiting for "+jstr['Delay']+" Seconds..")
                    time.sleep(int(jstr['Delay']))
                else:
                    print("Send:: "+str(signal))
                    b_string = signal.encode('utf-8')
                    #Sending Can signals
                    self.exctdll.wecan_send(b_string)
                    time.sleep(0.5)
            print("Can signals are sent.....")
        except OSError:
            print("access violation reading, Signal may not available.....")
                
    #Default signals for GA hardware 
    def ga_default(self):   
        default_signals=[]
        '''entry ='{"Type" : "RAW","Mode" : "HS","id" : "1568","Value" : "0140000000000000"}'
        default_signals.append(entry)
        entry ='{"Type" : "RAW","Mode" : "HS","id" : "283934720","Value" : "0000000000000000"}'
        default_signals.append(entry)
        entry ='{"Type" : "Signal","Mode" : "HS","name" : "SysPwrMd","Value" : "2"}'
        default_signals.append(entry)'''
        
        for signal in default_signals:
            b_string = signal.encode('utf-8')
            self.exctdll.wecan_send(b_string)
            
    #Default signals for GB hardware 
    def gb_default(self):
        default_signals=[]
        entry ='{"Type" : "Signal","Mode" : "HS","name" : "VCCSLS_CtlAval","Value" :"0"}'
        default_signals.append(entry)
        for signal in default_signals:
            print(signal)
            b_string = signal.encode('utf-8')
            self.exctdll.wecan_send(b_string)
        
        
