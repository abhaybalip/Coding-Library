# python - directory
import os;
# directory is collection of files or other dir

# get directory methode
dir = os.getcwd()
print("\nDirectory of File = ",dir)

# list directory element
print("\nDirectory List : \n",os.listdir())

print("\nDirectory of c: \n",os.listdir("c:\\"))

print("\nList of doc : ",os.listdir("C:\\Users\\abhay\\Documents"))

# making directory
# os.mkdir("C:\\Users\\abhay\\Documents\\TestDir")

# creating 2 text files
file1 = open("C:\\Users\\abhay\\Documents\\TestDir\\Test1.txt",'w')
file2 = open("C:\\Users\\abhay\\Documents\\TestDir\\Test2.txt",'w')

file1.close
file2.close
print(os.listdir("C:\\Users\\abhay\\Documents\\TestDir"))

# removing directory or file
os.remove("C:\\Users\\abhay\\Documents\\TestDir")

print(os.listdir("C:\\Users\\abhay\\Documents"))