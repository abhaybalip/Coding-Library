# python - Exception Handeling

# print("Builtin py Exception : ", dir(locals()['__builtins__']))

def division(x,y):
    return(x/y)

# code block that can generate exception
try:
    print(division(1/0))

except (ZeroDivisionError):
    print('Error Occured !')

finally: 
    print('finally block is executed in all cases')