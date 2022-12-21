# python - OOP - Class & Object

# Declaring Class
class Student: 
    # Methode of Class 
    # Self parameter - refers own data
    def setData(self,id,Name):
        self.id   = id
        self.Name = Name

    def Display(self):
        print("Id :",self.id," Name : ",self.Name)

# Creat Instance of class
S = Student()
S.setData(3,"ABHAY")
S.Display()

class Teacher:
    Name = "Place_Holder"
    id   = 0
    def setData(self,Name,id):
        self.Name = Name
        self.id   = id
    def Display(self):
        print("Name : ",self.Name," Id : ",self.id)

no = int(input("Enter Id : "))
name = str(input("Enter Name : ")) 
T = Teacher()
print("Before Using Set Methode : ")
T.Display()
T.setData(name,no)
print("After Using Set Methode")
T.Display()
