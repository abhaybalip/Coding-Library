# python - function

# function definition
def display()  :
    return ("Welcome")

# function with parameter
def sum(x,y)   :
    return (x+y)

def factorial(x)   :
    ans = 1
    i = 1
    for i in range(1,x) :
        ans += ans*i
    return ans

# function call
print("display function : ",display(),"\n Sum function : ",sum(1,1),"\n Factorial function : ",factorial(5))

# multiple arguments
def sum(*num):
    result = 0
    for i in num:
        result += i
    return result

print(sum(1,2),sum(1,3,5))

def intro(**data):
    for key,value in data.items():
        print(key,' : ',value)

intro(name='name',surname='sn',age=18,gender='m')