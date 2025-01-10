import sys
import os
import configparser

#Changing directory to Batch folder
cwd = os.getcwd().split('Batch')
os.chdir(cwd[0]+'\Batch')

#Getting configuration values from config.ini
configParser = configparser.RawConfigParser()   
configFilePath = r'config.ini'
configParser.read(configFilePath)
simulator_Name = configParser.get('config', 'Simulator_Name')
windows_flag = configParser.get('config', 'Windows')
vip_version=configParser.get('config', 'VIP_version')
arxml_fileName = configParser.get('config', 'ARXML_FileName')
dbc_fileName=configParser.get('config', 'DBC_FileName')

payload=[]
#Loading GA and GB related signals to the list
if vip_version.lower()=="ga":
    data ='{"Type" : "Signal","Mode" : "HS","name" : "RrStRmndrCstSetAvail","Value" :"1"}'
    payload.append(data)
    
elif vip_version.lower()=="gb":
    data ='{"Type" : "Signal","Mode" : "HS","name" : "RrStRmndrEnblDsblCstSetAval","Value" :"1"}'
    payload.append(data)
    data ='{"Type" : "Signal","Mode" : "HS","name" : "StBltShfIntlkCstSetAval","Value" :"1"}'
    payload.append(data)
    data ='{"Type" : "Signal","Mode" : "HS","name" : "VCCSLS_CtlAval","Value" :"1"}'
    payload.append(data)

#Conditions for simulator type
if simulator_Name.lower()=="wecansim":
    #Change directory to WeCanSim folder. 
    sys.path.append("./WeCanSim")
    from weCanSim import *
    cwd = os.getcwd()+"\WeCanSim"
    os.chdir(cwd)
    #Access the weCanSim class
    _wecan=weCanSim()
    #Sending Can signals
    _wecan.send(arxml_fileName,dbc_fileName,windows_flag,vip_version,payload)
    
elif simulator_Name.lower()=="gmvehiclesim":
    #Change directory to GMSimulator folder.
    sys.path.append("./GMSimulator")
    from gmCanSignal import *
    cwd = os.getcwd()+"\GMSimulator"
    os.chdir(cwd)
    payload_Tx=[]
    #String to Json conversion
    for signal in payload:
        jsonData=json.loads(signal)
        payload_Tx.append(jsonData)
    
    #Access the gmCanSignal class
    _gmSignal=gmCanSignal()
    _gmSignal.send(payload_Tx)
    _gmSignal.close(None,None)
    
else:
    print("Error::: Simulator name should be specified properly.......")
    
    











