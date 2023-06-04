# python - lambda expression
# lambda expression defines a function

rep = lambda x: 1/x
print(rep(2))

div = lambda x,y: x/y
print(div(4,1))

def Factorial(num):
    if(num>0):
        return num*Factorial(num-1)
    else:
        return 1

print("Factorial of 5 = ",Factorial(5))