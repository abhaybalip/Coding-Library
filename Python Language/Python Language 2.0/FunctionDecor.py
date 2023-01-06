# python - function decoration

def decorate(fcn):
    def function():
        print("This is decorated function !")
        fcn()
    return function

def fcn():
    print("This is Funtion")
fcn()

fcn = decorate(fcn)
fcn()

print("Example 2 : ")
def decorate2(function):
    print("Decorating function :")
    def inner():
        function()
        print("Welcome to programming \a glad to see you here !")
    return inner

def greet():
    print("Hi ")
print("Norml function : ")
greet()
greet = decorate2(greet)
greet()

print("example 3")
def decorate3(div):
    print("After decoration :")
    def inner(a,b):
        print(a,' / ',b,' = ')
        if(b==0):
            print("Infinity !")
        else:
            return div(a,b)
    return inner


def div(a,b):
    return a/b
div = decorate3(div)
print(div(4,2))