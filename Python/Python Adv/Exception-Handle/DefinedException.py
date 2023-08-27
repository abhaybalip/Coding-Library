# python - Define Exception

# extends exception class
class InvalidAgeException(Exception):
    pass

try:
    age = 0
    if(age<1):
        raise InvalidAgeException
    print('Age is valid')
except :
    print('Age is not valid !')
finally :
    print('refer valid age')

# calling constructor
class Entry_Exception(Exception):
        def __init__(self,Marks):
            self.msg = 'Invalid Marks'
            super().__init__(self.msg)

try:
    pointer = -1
    if(pointer<0):
        raise Entry_Exception(pointer)
    else:
        print('No Exception')
except:
    print('Exception Occured !')