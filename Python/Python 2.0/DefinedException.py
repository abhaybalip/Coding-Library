# python - UserDefined Exception
# extends exception class
class InvalidAgeException(Exception):
    pass

try:
    age = int(input("Enter Your Age : "))
    if(age<1):raise InvalidAgeException
    print("Thank You\nExecuted without error")
except :
    print("Enter Valid Age next time\nexcept block")
finally :
    print("Finally block")

# calling constructor
class InvalidPointerException(Exception):
        def __init__(self,Marks):
            self.msg = "Invalid Marks"
            super().__init__(self.msg)

try:
    pointer = float(input("Enter Your Pointer : "))
    if(pointer<0):raise InvalidPointerException(pointer)
    else:
        print("Good \nKepp Going Up!")
except:
    print("Enter Valid Pointer")