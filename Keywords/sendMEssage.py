import subprocess

class sendMEssage:
    
    def message(argument, value):
        path = r"C:\Users\AkashPrasad\Downloads\Rtos_windows\Batch\sendCanSignal.py"
        command = f'python {path} {argument}={value}'
        subprocess.Popen(command, shell=True,stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)