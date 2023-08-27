# python - oop - class & constructor

class My_Class:
    def __init__(self) -> None:
        pass

    # class data
    id = 100
    s = 'my string'
    # class methode
    def setData(self,id,s):
        self.id = id
        self.s = s
    def display(self):
        print('id= ',self.id,' string= ',self.s)

# class instance
mc = My_Class()
mc.setData(10,'name')
mc.display()