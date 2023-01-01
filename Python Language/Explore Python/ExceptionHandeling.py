# python - Exception Handeling
# print("Builtin py Exception : ", dir(locals()['__builtins__']))

def division(x,y):
    return x/y

# Exception defined
try:
    int = division(1/0)
    print(int)
except ZeroDivisionError: # exception mentioned
    print("Divided by zero")

print('-----------------------------------')
# assertion - return boolean value for error detection
try:
    num = int(input("Enter a Number : "))
    assert num%2==0
except:
    print("Not a even Number")
else:
    print("Even Number \nReciprocal = ",1/num)

print('-----------------------------------')
# finally block
try:
    num = division(1/0)
except:
    print("Error Occured \nExcept block code")
finally:
    print("This is finally block code")
