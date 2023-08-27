# python - closure function
# inner function can access outer function data
def greet(name):
    def say_Hello():
        print("Hello ",name)

    say_Hello();

greet("my_name")

def calculate(num):
    def sum(n):
        print(num)
    sum(num)

calculate(10)