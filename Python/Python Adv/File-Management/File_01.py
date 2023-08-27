# python - Files

# open file - read+write mode
file = open('Text.txt','r+')

# file read methodes
if(file.readable()):
    data = file.read(5)
    print('data: {data}')

    data = file.readlines()
    print('data: ',data)
    
    # truncate file
    file.truncate()


# close file
file.close()