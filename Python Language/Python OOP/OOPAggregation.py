# python - OOP - Aggregation

class Address:
    def __init__(self,Country,City):
        self.City    = City
        self.Country = Country

# Address Instance 
A = Address("IND","MUMBAI")

class Company:
    # Object Equipped
    def __init__(self,N,CName,Tag):
        self.N = N
        self.CName = CName
        self.Tag   = Tag
        
    def Display(self):
        print("Company Name : ",self.CName," Tag : ",self.Tag,"\nCountry : ",self.N.Country," City : ",self.N.City)

# Company Instance
C = Company(A,"Company","T") 
print("Company Class Display :")
C.Display()

class Employee:
    def __init__(self,EName,Post,C):
        self.EName = EName
        self.Post  = Post
        self.C     = C
    def DisplayInfo(self):
        print("Company Name : ",self.C.CName," Tag : ",self.C.Tag,"\nCountry : ",self.C.N.Country," City : ",self.C.N.City)
        print("Employee Detail : \nName : ",self.EName," Post : ",self.Post)

E = Employee("Employee","CEO",C)
print("Employee Class Display :")
E.DisplayInfo()