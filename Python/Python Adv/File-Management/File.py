# python - Files

# file modes : a- append , r-read , w- write
# open file using path
file = open('Text.txt',mode='a+')

# file write methodes
if(file.writable()):

    file.write('Hello World')
    file.writelines(['Hello','World'])

    # clear internal buffer to write all pending data
    file.flush()

    # truncate file
    file.truncate()

print('file info: \nFile-No: ',file.fileno())
print('file atty: ',file.isatty())

# close file
file.close()