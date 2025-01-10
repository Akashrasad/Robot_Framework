import paramiko, os, time, json, logging, tarfile, traceback

import utilities as utils
from pathlib import Path
from robot.libraries.BuiltIn import BuiltIn
from libraries.vehicle_sim_helper import VehicleSimHelper
from libraries.json_interactions import JSONInteractions
from libraries.cat_logging.cat_logging import CatLogging

logger = CatLogging.getLogger()

FILE_PATH = os.path.abspath(os.path.dirname(__file__))
BINARY_DIRECTORY = str(Path(FILE_PATH)) + "\\qnx\\wukong"
JSON_DIRECTORY = str(Path(FILE_PATH)) + "\\qnx\\qnx_coordinates.json"

class QNXFramework:
    ssh = None
    sftp = None
    host = None
    vehicle = ''
    _instance = None

    @staticmethod
    def getInstance():
        if QNXFramework._instance == None:
            QNXFramework()
        return QNXFramework._instance

    def __init__(self):
        if QNXFramework._instance != None:
            raise Exception("This class is a singleton")
        else:
            QNXFramework._instance = self
        
    def connect(self, vehicle, host):
        self.host = host
        self.vehicle = vehicle
        
        try:
            self.ssh = paramiko.SSHClient()
            self.ssh.set_missing_host_key_policy(paramiko.AutoAddPolicy())
            self.ssh.connect(hostname=host, username='root', password='', port=22)
            utils.exec_local_command("ssh -o StrictHostKeyChecking=no -o UserKnownHostsFile=/dev/null root@{}"
                                            .format(host))
            
            # Check if wukong binary exists in system
            self.sftp = self.ssh.open_sftp()
            self.sftp.stat("/tmp/wukong")

        # if Wukong file does not exist in system, push
        except FileNotFoundError:
            self.sftp = self.ssh.open_sftp()
            self.sftp.put(BINARY_DIRECTORY, "/tmp/wukong")
            self.ssh.exec_command("chmod a+x /tmp/wukong")

        # Print any exception that may have been raised
        except Exception as e:
            logger.debug(f"An error occurred: {e}")
            raise e
        
    def is_connected(self):
        if self.ssh is not None:
            if self.ssh.get_transport() is not None:
                if self.ssh.get_transport().is_active():
                    try:
                        self.ssh.get_transport().send_ignore()
                        return True
                    except:
                        return False
                    
        return False

    def qnx_send_command(self, command):
        utils.ssh_command(host=self.host, command=command)
        
    def pull_build_info(self, path):
        """
        path: Destination path for "Buildinfo.txt"
        """
        try:
            logger.info("Pulling build info")
            self.sftp.get("Buildinfo.txt", os.path.join(path, "Buildinfo.txt"))
           
        # Print any exception that may have been raised
        except Exception as e:
            logger.debug(f"An error occurred: {e}")
            raise e
            
    def tap_by_coordinates(self, x_cords, y_cords, dev=1):
        """
        x_cords: X coordinate where user wants to tap
        y_cords: Y Coordinate where user wants to tap
        dev: Device where user wants to tap.
        """

        try:
            logger.info("Tapping on X:{} Y:{}".format(x_cords, y_cords))
            self.ssh.exec_command('qnx_touch -d {} -x {} -y {} && sleep 2'.format(dev, x_cords, y_cords))
            time.sleep(2)
            logger.info("Tap Successful")

        except Exception as e:
            logger.error("Tap Unsuccessful:  {}".format(e))


    def qnx_swipe_by_coordinates(self,x,y,m,n, dev=1):
        """
        dev: Device where swipe going to happen.
        swipe left is 7998,989,5736,923 for L233
        swipe right is 5736,989,7998,923 for L233
        swipe left is 584,518,1769,487 for BT1
        swipe right is 1769,518,584,487 for BT1
        """

        try:
            logger.info("Swiping left")
            self.ssh.exec_command('/tmp/wukong swipe -d {} -f {},{} -t {},{}'.format(dev, x, y, m, n))
            time.sleep(3)
            logger.info("Swipe Successful")

        except Exception as e:
            logger.error("Swipe Unsuccessful:  {}".format(e))


    def hold(self, x_cords, y_cords, seconds, dev):
        """
        x_cords: X coordinate where user wants to hold.
        y_cords: Y Coordinate where user wants to hold.
        dev: Device where hold is supposed to happen.
        """

        try:
            logger.info("Hold on: X:{} Y:{}".format(x_cords, y_cords))
            self.ssh.exec_command('/tmp/wukong hold -d {} -p {},{} -t {}'.format(dev, x_cords, y_cords, seconds))
            time.sleep(3)
            logger.info("Hold Successful")

        except Exception as e:
            logger.error("Hold Unsuccessful:  {}".format(e))

    def close(self):
        """
        Function closes ssh connection.
        """
        self.ssh.close()
        self.sftp.close()

    def qnx_screenshot(self, screenshot_name, dir, size=None, pos=None, dev=1, zip_first=False, area_of_interest=None, cluster_view=None, reference_image_path=None, reference_image=None):
        """
        screenshot_name: Name of screenshot. Please do not add '.png' since function automatically does it for you.
        size: Size of screenshot, argument must be passed as a list of x,y coordinates. i.e. [50,100]
        pos: Position of screenshot, argument must be pass as a list of x,y coordinates. i.e. [100,200]
        dev: Device where screenshot is going to be taken. It's usually 1 for freeform, 2 for rectangle form.
    
        """
        try:
            if not cluster_view:
                if BuiltIn().get_variable_value("${cluster_view}"):
                    cluster_view = BuiltIn().get_variables()["${cluster_view}"]
            if not area_of_interest:
                if BuiltIn().get_variable_value("${area_of_interest}"):
                    area_of_interest = BuiltIn().get_variables()["${area_of_interest}"]

            if reference_image_path and reference_image and BuiltIn().get_variable_value("${SCREENSHOT_WITH_COORDINATES}"):
                self.capture_screenshot_with_coordinates_and_pull(screenshot_name=screenshot_name, dir=dir, cluster_view=cluster_view, dev=dev, reference_image_path=reference_image_path, reference_image=reference_image)
            else:
                if BuiltIn().get_variable_value("${SCREENSHOT_WITH_COORDINATES}"):
                    logger.warn("SCREENSHOT_WITH_COORDINATES is True but no reference image was passed to simple_qnx_screenshot!")
                logger.info("Defaulting to full cluster screenshot")

                self.take_screenshot(screenshot_name=screenshot_name, size=size, pos=pos, dev=dev)
                self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=zip_first, cluster_view=cluster_view)
                    
        except Exception:
            logger.error("Defaulting to full cluster screenshot due to error: {}".format(traceback.print_exc()))
            self.take_screenshot(screenshot_name=screenshot_name, size=size, pos=pos, dev=dev)
            self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=zip_first, cluster_view=cluster_view)
             
    def capture_screenshot_with_size_and_pull(self, screenshot_name, dev, dir, pos, size, cluster_view):
        logger.info("Taking screenshot with size: {} and pos: {}".format(size, pos))

        self.take_screenshot(screenshot_name=screenshot_name, size=size, pos=pos, dev=dev)
        self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=False, cluster_view=cluster_view)


    def take_screenshot(self, screenshot_name, size=None, pos=None, dev=1):
        """
        screenshot_name: Name of screenshot. Please do not add '.png' since function automatically does it for you.
        size: Size of screenshot, argument must be passed as a list of x,y coordinates. i.e. [50,100]
        pos: Position of screenshot, argument must be pass as a list of x,y coordinates. i.e. [100,200]
        dev: Device where screenshot is going to be taken. It's usually 1 for freeform, 2 for rectangle form.
        """

        # check if .png is at the end of screenshot_name, if it is not, add it
        screenshot_name = utils.verify_png_extension(screenshot_name)

        try:
            # If no size and position were given, just take screenshot
            # This is a last resort as it will take a screenshot of the cluster and a blank android screen on some vehicles
            if not size and not pos:
                logger.info("Taking Screenshot")
                
                stdin, stdout, stderr = self.ssh.exec_command('screenshot -file=data/{} -display={}'.format(screenshot_name, dev))

                exit_status = stdout.channel.recv_exit_status()
                
                if exit_status != 0:
                    logger.warn("Did not receive ssh exit status of 0!")
            else:
                logger.info("Taking Screenshot")

                stdin, stdout, stderr = self.ssh.exec_command(
                    'screenshot -size={},{} -pos={},{} -display={} -file=data/{}'.format(size[0], size[1], pos[0],
                                                                                            pos[1], dev, screenshot_name))
                
                exit_status = stdout.channel.recv_exit_status()
                
                if exit_status != 0:
                    logger.warn("Did not receive ssh exit status of 0!")

            logger.info('Screenshot Successful')

        except Exception as e:
            logger.error("Screenshot Unsuccessful: {}".format(e))

    def pull_screenshots(self, dir, screenshot_name="", zip_first=False, cluster_view=None):
        """
        Pulls screenshot(s) from QNX device to local machine.
        Args:
            screenshot_name: Name of screenshot.
            dir: Directory where screenshot(s) will be saved to.
            zip_first: If true, function will zip all screenshots taken before pulling them. If false, only screenshot_name will be pulled.
            Then all pngs on VCU will be deleted. NOTE: If transferring smaller pngs, it is generally faster to pull individually without zipping first.
        """
        if cluster_view is not None:
            dir = os.path.join(dir, cluster_view)
        if not os.path.exists(dir):
            logger.debug("Creating Directory : " + dir)
            os.makedirs(dir)
            
        try:
            if not zip_first:
                # check if .png is at the end of screenshot_name, if it is not, add it
                screenshot_name = utils.verify_png_extension(screenshot_name)

                logger.info("Transferring {} to local machine".format(screenshot_name))

                paramiko.SFTPClient.MAX_REQUEST_SIZE = 332768
                self.sftp.get('/data/{}'.format(screenshot_name), os.path.join(dir, screenshot_name))
            else:
                logger.info("Zipping and then transferring all pngs to local machine")

                stdin, stdout, stderr = self.ssh.exec_command('mkdir data/pictures')
                exit_status = stdout.channel.recv_exit_status()

                stdin, stdout, stderr = self.ssh.exec_command('mv data/*.png data/pictures')
                exit_status = stdout.channel.recv_exit_status()

                stdin, stdout, stderr = self.ssh.exec_command('tar czvf /data/pictures.tar.gz data/pictures')
                exit_status = stdout.channel.recv_exit_status()

                paramiko.SFTPClient.MAX_REQUEST_SIZE = 332768
                self.sftp.get('/data/pictures.tar.gz', dir + 'pictures.tar.gz')

                file = tarfile.open(dir + "pictures.tar.gz")
                file.extractall(dir + './pictures')
                file.close()

            logger.info('Transfer complete')

        except Exception as e:
            logger.error("Transfer Unsuccessful: {}".format(e))

        if zip_first:
            self.ssh.exec_command('rm /data/*.png')
            self.ssh.exec_command('rm /data/pictures.tar.gz')
            self.ssh.exec_command('rm -rf /data/pictures')
        else:
            self.ssh.exec_command('rm /data/{}'.format(screenshot_name))
    
    def change_cluster_view(self, cluster_view):
        veh_json_key = "{}_{}".format(BuiltIn().get_variable_value("${display_size}"), self.vehicle)

        veh_json = JSONInteractions().get_jsonFile_Directory(JSON_DIRECTORY)
        if veh_json_key in veh_json:
            if veh_json[veh_json_key]['supported_cluster_views']:
                if cluster_view in veh_json[veh_json_key]['supported_cluster_views']:
                    if veh_json[veh_json_key]["change_cluster_view_type"] == "touch":
                        self.tap_by_coordinates(veh_json[veh_json_key][cluster_view]['x'], veh_json[veh_json_key][cluster_view]['y'])
                    elif veh_json[veh_json_key]["change_cluster_view_type"] == "swc":
                        veh_sim = VehicleSimHelper.getInstance()
                        veh_sim.send_swc("clusterView")
                        time.sleep(2)
                    else:
                        logger.critical("{} does not have a change_cluster_view_type object or the type is not 'touch' or 'swc'! Please double check libraries/qnx/qnx_coordinates.json.".format(veh_json_key))
                        return False
                    logger.info("Changed cluster view to {} using {}!".format(cluster_view, veh_json[veh_json_key]["change_cluster_view_type"]))
                    return True
                else:
                    logger.critical("{} is not a supported cluster view on {}! Please double check libraries/qnx/qnx_coordinates.json".format(cluster_view, veh_json_key))
                    return False
            else:
                logger.critical("{} does not have a supported_cluster_views object! Please double check libraries/qnx/qnx_coordinates.json.".format(veh_json_key))
                return False
        else:
            logger.critical("{} could not be found! Please double check libraries/qnx/qnx_coordinates.json.".format(veh_json_key))
            return False


    def capture_screenshot_with_aoi_and_pull(self, dir, screenshot_name, area_of_interest, cluster_view, display_num=1):
        start = time.time()
        veh_json_key = "{}_{}".format(BuiltIn().get_variable_value("${display_size}"), self.vehicle)
        veh_json = JSONInteractions().get_jsonFile_Directory(JSON_DIRECTORY)
        if veh_json_key in veh_json:
            if veh_json[veh_json_key]['supported_cluster_views']:
                if cluster_view in veh_json[veh_json_key]['supported_cluster_views']:
                    # todo
                    # revist after refactoring of maintaining current cluster views
                    # self.change_cluster_view(cluster_view)
                    if veh_json[veh_json_key]['areas_of_interest']:
                        if area_of_interest not in veh_json[veh_json_key]['areas_of_interest']:
                            logger.warn("{} is not a supported area of interest for {}! Please double check libraries/qnx/qnx_coordinates.json. Defaulting to full_cluster screenshot.".format(area_of_interest, self.vehicle))
                            area_of_interest = "full_cluster"
                        zone = veh_json[veh_json_key]['areas_of_interest'][area_of_interest][cluster_view]
                        if zone != "None":
                            if zone in veh_json[veh_json_key]['zones']:
                                zone_values = veh_json[veh_json_key]['zones'][zone]
                                self.take_screenshot(screenshot_name=screenshot_name, dev=display_num, pos=[zone_values['x'], zone_values['y']], size=[zone_values['width'], zone_values['height']])
                                self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=False, cluster_view=cluster_view)
                                total_time = round(time.time() - start, 2)
                                logger.info("Time to capture and pull screenshot: {} seconds".format(total_time))
                                return True
                    else:
                        logger.warn("{} does not have an areas_of_interest object! Defaulting to full cluster screenshot".format(veh_json_key))
                        self.take_screenshot(screenshot_name=screenshot_name, dev=display_num)
                        self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=False, cluster_view=cluster_view)
                        return True
                else:
                    logger.critical("{} is not a supported cluster view on {}! Please double check libraries/qnx/qnx_coordinates.json".format(cluster_view, veh_json_key))
                    return False
                    
    def capture_screenshot_with_coordinates_and_pull(self, screenshot_name, dir, reference_image_path, reference_image, cluster_view, dev=1):
        reference_image_path = os.path.join(reference_image_path, cluster_view)
        # check if .png is at the end of reference_image, if it is not, add it
        reference_image = utils.verify_png_extension(reference_image)

        if not Path(os.path.join(reference_image_path, reference_image)).is_file():
            if not BuiltIn().get_variable_value("${FORCE_SCREENSHOTS_WITHOUT_REFERENCE_IMAGES}"):
                logger.warn("Reference image {} does not exist! Skipping screenshot!".format(os.path.join(reference_image_path, reference_image)))
                return
            logger.warn("WARNING: Reference image {} does not exist! But we will still take a screenshot..".format(os.path.join(reference_image_path, reference_image)))
            

        ds, vp, variant, test_component, cv = utils.get_vehicle_info_from_path(reference_image_path)
        tree = JSONInteractions().get_coordinates_json()

        tree = JSONInteractions().verify_reference_coordinates_json_object(ds, vp, variant, cv, reference_image, tree)

        value = tree[ds][vp][variant][cv][reference_image]


        if value["x"] is None or BuiltIn().get_variable_value("${OVERWRITE_REFERENCE_COORDINATES}") == True :
            logger.warn("No coordinate data saved! Taking a full_cluster screenshot and will save coordinates for future test runs!")
            start = time.time()
            self.take_screenshot(screenshot_name=screenshot_name, dev=dev)
            self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=False, cluster_view=cluster_view)
            total_time = round(time.time() - start, 2)
            logger.info("Time to capture and pull screenshot: {} seconds".format(total_time))
            if BuiltIn().get_variable_value("${LOOP_THROUGH_ALL_CLUSTER_VIEWS}"):
                dir = os.path.join(dir, cluster_view)
            utils.save_ref_coordinates_from_full_cluster(full_cluster_image_path=dir, full_cluster_image_name=screenshot_name, ref_image_path=reference_image_path, ref_image_name=reference_image)
        else:
            #value["x"] is not None so
            logger.info("Taking screenshot with values from reference_coordinates.json! x={}, y={}, w={}, h={}".format(value["x"], value["y"], value["width"], value["height"]))
            # we have coordinates for the ref image, so we can take a screenshot with size and pos
            start = time.time()
            self.take_screenshot(screenshot_name=screenshot_name, size=[value["width"], value["height"]], pos=[value["x"], value["y"]], dev=dev)
            self.pull_screenshots(screenshot_name=screenshot_name, dir=dir, zip_first=False, cluster_view=cluster_view)
            total_time = round(time.time() - start, 2)
            logger.info("Time to capture and pull screenshot: {} seconds".format(total_time))
