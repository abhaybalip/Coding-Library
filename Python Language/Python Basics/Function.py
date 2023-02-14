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

# lambda function
# make mathematical function and return output
print("Welcome To python")

# declare lambda function 
sum4 = lambda x : x + 4
print(sum4(1))

# recursion
fact = lambda x : 1 if(x<=1) else x*fact(x-1)
print(fact(5))

Binomial = lambda x,a,b,c : (a*x*x + b*x + c)
print(Binomial(2,2,2,2))