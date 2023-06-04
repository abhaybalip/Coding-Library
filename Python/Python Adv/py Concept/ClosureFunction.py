# python - closure function
# inner function can access outer function data
def greet(name):
    def say_Hello():
        print("Hello ",name)

    say_Hello();

greet("abhay")

def calculate(num):
    def sum(n):
        print(num)
    sum(num)

calculate(10)