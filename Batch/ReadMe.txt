1.Batch folder should contains GMSimulator folder,WeCanSim folder,
  config.ini file and list of .bat files and there corresponding .py files.
2.config.ini file should contains the configuration.
	Simulator_Name=WeCanSim/GMVehicleSim
	Windows=Y/N 
	VIP_version=GB/GA
 Note:: Latest .arxml file and .dbc file names should be mention as below 
	and those files must be available in Batch\WeCanSim folder. 
	Ex:
	ARXML_FileName=GB_ASR_VCU_23_23_157_PreEcuC_No_ODX.arxml
	DBC_FileName=GlobalA-LE.dbc
3.While using GMVehicleSimulator, GMVehicleSimulator should be in connected state and WeCan tool must be in closed state.
4.While using WeCanSim, GMVehicleSimulator and WeCan tool must be in closed state.