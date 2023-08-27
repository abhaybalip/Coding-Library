# python - constructor

class My_Class:
    # class constructor
    def __init__(self) -> None:
        print('constructor called')

    # class destructor
    def __del__(self):
        print('destructor called')

mc = My_Class()
mc.__del__()