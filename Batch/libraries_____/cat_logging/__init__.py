import sys
import os
import inspect

cwd = os.path.dirname(inspect.getfile(inspect.currentframe()))
sys.path.append(cwd)