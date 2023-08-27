# python - directory

# os module provides function to use os facilities
import os;

# create directory
os.mkdir('Test_Dir')

# create nested dirs
os.makedirs('Test_Dir/sub_dir/')

# remove directory
os.remove('Test_Dir')

# current directory
print('current dir: ',os.getcwd())

# change directory
os.chdir('')