# python - Exception Raising

def Raiser():
    if(True):
        raise  ValueError('Invalid Number')
    else: print('{num}')
def Raiser2():
    if(True):
        raise Exception
    else: print('NO Exception')

try:
    Raiser()
except Exception as e:
    print('Exception: ',e)

try:
    Raiser2()
except Exception as e:
    print('Exception: ',e)