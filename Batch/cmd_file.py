# import sys

# def usage():
#     """
#     Displays the correct usage of the script.
#     """
#     print(
#         "Usage:\n"
#         "    python sendCanSignal.py signalName=value\n"
#         "Example:\n"
#         "    python sendCanSignal.py signal=1\n"
#     )

# def send_signal(signal_name, value):
#     """
#     Simulates sending a CAN signal.
#     """
#     print(f"Sending signal: {signal_name} with value: {value}")
#     print(f"Signal {signal_name} with value {value} sent successfully.")

# def parse_and_send(args):
#     """
#     Parses the input argument and sends the CAN signal.
#     """
#     try:
#         if len(args) != 1 or "=" not in args[0]:
#             raise ValueError("Invalid input format.")
        
#         signal_name, value = args[0].split("=")
#         send_signal(signal_name, value)
#     except ValueError as e:
#         print(f"Error: {e}")
#         usage()

# if __name__ == "__main__":
#     if len(sys.argv) < 2 or "--help" in sys.argv:
#         usage()
#     else:
#         parse_and_send(sys.argv[1:])
# import subprocess

# # Specify the full path to the Python script
# script_path = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch\sendCanSignal.py'
# working_directory = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch'

# # Create the initial command with one signal
# command = ['python', script_path, 'VCCSLS_CtlAval=0']

# # Dynamically append another signal
# command.append('signal_2=1')

# # Run the command in the command prompt
# subprocess.run(command, shell=True, cwd=working_directory)

# import subprocess

# def send_signals(script_path, working_directory, **signals):
#     """
#     Run the sendCanSignal.py script with dynamic signal arguments.

#     :param script_path: Full path to the Python script
#     :param working_directory: Directory to execute the command from
#     :param signals: Key-value pairs of signals to send (e.g., signalName=value)
#     """
    
#     # Base command to execute the Python script
#     command = ['python', script_path]
    
#     # Append each signal dynamically
#     for signal_name, value in signals.items():
#         command.append(f'{signal_name}={value}')
    
#     # Run the command in the specified working directory
#     subprocess.run(command, shell=True, cwd=working_directory)
#     print(f"Executed command: {' '.join(command)}")

# # Example Usage
# script_path = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch\sendCanSignal.py'
# working_directory = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch'

# # Send dynamic signals
# # send_signals(script_path, working_directory, VCCSLS_CtlAval=1, TrcStbScrConfig=1, HillDscntCtlVirtSwAvl=1,VirtOnePedDrvCtlAval=1,VCDLS_DomeLgtAval=1,PwrRrClsrCstSetAval=1,FTPP_VirtCtlHdPrkLmpsAvalAuth=1)
# # send_signals(script_path, working_directory, VCCSLS_CtlAval=0)
# # send_signals(script_path, working_directory, VCCSLS_CtlAval=1, TrcStbScrConfig=1, HillDscntCtlVirtSwAvl=1,VirtOnePedDrvCtlAval=1,VCDLS_DomeLgtAval=1,PwrRrClsrCstSetAval=1,FTPP_VirtCtlHdPrkLmpsAvalAuth=1)
# # send_signals(script_path, working_directory, VCCSLS_CtlAval=0, TrcStbScrConfig=0, HillDscntCtlVirtSwAvl=0,VirtOnePedDrvCtlAval=0,VCDLS_DomeLgtAval=0,PwrRrClsrCstSetAval=0,FTPP_VirtCtlHdPrkLmpsAvalAuth=0)
# send_signals(script_path, working_directory, VCCSLS_CtlAval=1)
# send_signals(script_path, working_directory, TrcStbScrConfig=1, HillDscntCtlVirtSwAvl=1,VirtOnePedDrvCtlAval=1,VCDLS_DomeLgtAval=1,PwrRrClsrCstSetAval=1,FTPP_VirtCtlHdPrkLmpsAvalAuth=1)
# send_signals(script_path, working_directory, HillDscntCtlVirtSwAvl=1,VirtOnePedDrvCtlAval=1,VCDLS_DomeLgtAval=1,PwrRrClsrCstSetAval=1,FTPP_VirtCtlHdPrkLmpsAvalAuth=1)

import os
import json
import subprocess

destination_dir = os.path.join(os.getcwd(), "Images")
destination_path = os.path.join(destination_dir, "screenshot.png")
base_dir=os.getcwd()


# Dynamic file paths
file_path = os.path.join(str(base_dir), 'data.json')
script_path = os.path.join(str(base_dir), 'Batch', 'sendCanSignal.py')
working_directory = os.path.join(str(base_dir), 'Batch')
json_file_path = os.path.join(str(base_dir), 'data.json')
# file_path=r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\data.json'
# script_path = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch\sendCanSignal.py'
# working_directory = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch'
# json_file_path = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\data.json'

def initialize_signals(file_path):
    """
    Initialize the JSON file with an empty dictionary if it doesn't exist.
    All signals will be added dynamically later with default values set to 0.

    :param file_path: Path to the JSON file.
    """
    try:
        # Check if the file exists and load existing data
        try:
            with open(file_path, "r") as json_file:
                existing_data = json.load(json_file)
        except (FileNotFoundError, json.JSONDecodeError) as e :
            return e
            # existing_data = {}

        # Set all existing signals to 0
        reset_data = {signal: 0 for signal in existing_data.keys()}

        # Save the reset data back to the file
        with open(file_path, "w") as json_file:
            json.dump(reset_data, json_file, indent=2)

        print(f"All signals in {file_path} have been reset to 0.")
    except Exception as e:
        print(f"An error occurred while resetting signals: {e}")







# file_path=r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\data.json'

# initialize_signals(file_path)


def send_signal_(signals,value):
    """
    Save a signal and its value to a JSON file.
    
    :param file_path: Path to the JSON file.
    :param signals: The signal name to save.
    :param value: The value associated with the signal.
    """
    try:
        # Check if the file exists and load existing data
        try:
            with open("data.json", "r") as json_file:
                existing_data = json.load(json_file)
        except (FileNotFoundError, json.JSONDecodeError):
            existing_data = {}

        # Add the new signal and its value
        existing_data[signals] = value

        # Save the updated data back to the JSON file
        with open("data.json", "w") as json_file:
            json.dump(existing_data, json_file, indent=2)

        print(f"Signal '{signals}' with value '{value}' saved to ") 
        # {"data.json"}
    except Exception as e:
        print(f"An error occurred while saving data: {e}")

# Example usage
# file_path = "signals.json"

# # Save a signal and its value
# save_to_json(file_path, "VCCSLS_CtlAval", 1)
# save_to_json(file_path, "HillDscntCtlVirtSwAvl", 1)
# save_to_json(file_path, "TrcStbScrConfig", 1)
# send_signal_ecomate("VCCSLS_CtlAval",1)
# send_signal_ecomate("VCCSLS_",1)


def send_signal_ecomate(w_signal, w_value, reset=False):
    """
    Run the sendCanSignal.py script with dynamic signal arguments and store the signals in a JSON file.
    
    :param script_path: Full path to the Python script
    :param working_directory: Directory to execute the command from
    :param json_file_path: Path to store the signals
    :param signals: Key-value pairs of signals to send (e.g., signalName=value)
    """
    # Base command to execute the Python script
#  set json values to 0 
#  Identify the signal and its value on josn 
#  send the signal


    if(reset == True):
        initialize_signals(file_path)
    
    send_signal_(w_signal,int(w_value))

    with open(json_file_path,"r")as file:
        data=json.load(file)
        print(data.items())
    command = ['python', script_path]
    
    # Append each signal dynamically to the command
    for signal_name, value in data.items():
        command.append(f'{signal_name}={value}')
    
    # Run the command in the specified working directory
    # subprocess.Popen(
    #         command,
    #         cwd=working_directory,  # Set the working directory
    #         shell=True,  # Run in shell mode
    #         stdout=subprocess.DEVNULL,  # Suppress output
    #         stderr=subprocess.DEVNULL  # Suppress errors
    #     )
    subprocess.run(command, shell=True, cwd=working_directory)
    print(f"Executed command: {' '.join(command)}")

    # Save signals to JSON
    # save_signals_to_json(json_file_path)


# Example Usage
# script_path = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch\sendCanSignal.py'
# working_directory = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\Batch'
# json_file_path = r'C:\Users\AkashPrasad\Downloads\RTos_windows_automation\data.json'

# Send signals and store them in the JSON file
# send_signals(True) 
            #   VCCSLS_CtlAval=1, 
            #   TrcStbScrConfig=1, 
            #   HillDscntCtlVirtSwAvl=1,
            #   VirtOnePedDrvCtlAval=1, 
            #   VCDLS_DomeLgtAval=1,
            #   PwrRrClsrCstSetAval=1,
            #   FTPP_VirtCtlHdPrkLmpsAvalAuth=1)
