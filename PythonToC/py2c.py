import os
import traceback

try:
	python_file_dir = input("Enter python file dir to compile\n")
	exe_file_dir = input("Enter exe file dir to save\n")
	command = "python \"C:\\Program Files\\Python36\\Scripts\\nuitka3-run-script.py\" --recurse-all {} --output-dir={}".format(
		python_file_dir, exe_file_dir)
	os.system(command)
except Exception as e:
	traceback.print_exc()
	input()
