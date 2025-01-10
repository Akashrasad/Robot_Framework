# from Batch import sendCanSignal
import os
import subprocess

def readMessageFile():
    # script_path = "Batch/sendCanSignal.py"
    script_path = "C:\\Users\\AkashPrasad\\Downloads\\Batch_working\\Batch\\sendCanSignal.py"
    print()
    # os.system(f"python {script_path} VCCSLS_CtlAv=0")
    command = ['python', script_path, 'VCCSLS_CtlAv=1']
    
    # Run the command and wait for the script to complete
    result = subprocess.run(command, capture_output=True, text=True)
    print("Signal has sent !!", result)
    
readMessageFile()
