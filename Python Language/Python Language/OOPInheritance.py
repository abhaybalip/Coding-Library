# python - OOP - Inheritance
# Parent Class : 

class Address:
    def setAdd(self,PinCode,City,Country):
        self.PinCode = PinCode
        self.City    = City 
        self.Country = Country
    def Display(self):
        print("Address Detail : ",self.Country," ",self.City," ",self.PinCode)

# Child Class - Inherits Property
class Student(Address):
    Name = 'Name'
    Id   = 0
    def __init__(self,Name,Id):
        self.Name = Name 
        self.Id   = Id

    def Info(self):
        print("Student Detail : \nName : ",self.Name," Id : ",self.Id)
        print("Address Detail : \nCountry : ",self.Country," City : ",self.City," PinCode : ",self.PinCode)
        
S = Student("abc",1)
S.setAdd(100,"city","country")
S.Info()

