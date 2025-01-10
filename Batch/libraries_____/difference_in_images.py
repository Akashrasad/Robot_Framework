import os, subprocess


def beyond_compare_images(image_1_directory, image_1_name, image_2_directory, image_2_name, results_directory):
    """
    1. create a temp folder and create report.html inside
    2. call image-compare-script.txt in command line and provide image inputs
    3. store output in temp folder
    4. copy over result png to results folder
    5. delete temp folder
    """
    # create temp folder with report.html inside

    # calling image-compare-script.txt and storing in temp folder

    beyond_compare_cmd = "C:\\Program Files\\Beyond Compare 4\\BCompare.exe"
    temp_folder = ""
    image_1 = os.path.join(image_1_directory, image_1_name)
    image_2 = os.path.join(image_2_directory, image_2_name)
    cmd = '{} @W:\\code\\ClusterAutomationTool\\libraries\\image-compare-script.txt "{}" "{}" "{}"'.format(beyond_compare_cmd, temp_folder, image_1, image_2)

    subprocess.call(cmd)

    # copy result png to results folder

    # delete temp folder