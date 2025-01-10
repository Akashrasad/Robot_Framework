# Copyright (C) GM Global Technology Operations LLC 2023.
# All Rights Reserved.
# GM Confidential Restricted.
import sys
import os
import inspect

cwd = os.path.dirname(inspect.getfile(inspect.currentframe()))
sys.path.append(cwd)

from . import difference_in_images