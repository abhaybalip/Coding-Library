# python - File Management

# open file in write mode
file1 = open('test.txt','w')
# write/writeline
file1.write('This file is written by py program')

# open file in default mode - read mode
file1 = open('test.txt')

print("Type of Data : ",type(file1))
content = file1.read()
print(content)

print('-----------------------------------')
str = file1.read(4)
print(str)

str2 = file1.readline(1)
print(str2)

print('-----------------------------------')
id = file1.fileno()
print("File No : ",id)

index = file1.tell()
print("Current Object count = ",index)

print('-----------------------------------')
IsSeekable = file1.seekable()
if(IsSeekable):
    print("Random access is avaliable")
else:
    print("random access not avaliable")

IsReadable = file1.readable
if(IsReadable):
    print("This file is readable")
else:
    print("File is not readable")

IsWritable = file1.writable()
if(IsWritable):
    print("file is writble")
else:
    print("file is not writable")


# closing file
file1.close()