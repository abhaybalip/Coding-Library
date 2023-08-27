# python - function
# In python function is an object

# function definition
def display()  :
    return ("Welcome")
display()

# function with parameter
def factorial(x)   :
    ans = 1
    i = 1
    for i in range(1,x) :
        ans += ans*i
    return ans

# function call
print("factorial: ",factorial(5))

# multiple arguments :
# list of arguments -
def sum(*num):
    result = 0
    for i in num:
        result += i
    return result
print(sum(1,2),sum(1,3,5))

# set of arguments -
def intro(**data):
    for key,value in data.items():
        print(key,' : ',value)
intro(name='name',surname='sn',age=18,gender='m')