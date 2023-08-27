# python - Files

# open file
file = open('Text.txt','w+')

if(file.seekable()):

    # file seek => 0- beginning , 1- current pos , 2- file ending
    # offset, from what
    file.seek(0,2)