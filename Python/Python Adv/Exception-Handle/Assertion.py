# python - Assertion

def validation(age=0):
    assert(age>0), 'Enter valid Age'

try:
    validation(0)
except Exception as e:
    print('Exception: ',e)