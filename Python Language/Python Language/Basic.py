# python - basic of python

# import module
import keyword

# output operation
print("hello")
a = 10
print(a)

# input operation
a = int(input("Enter a Number"))
# or 
b = input("Enter a Number")
print(a,"\t",b)
# multiple/split input
m,n = input("Enter 2 No").split()

# data type :
# int ,float ,double ,long ,char ,string
# list[] ,tuple() ,set{} ,dictionary{}
i = 10
f = 2.5
c = 'A'
name = "name"

# type casting
integer = int('10')
floatp  = float(3.5)
strs    = str('string')

# operator
# unary ,binary ,ternary
# arithamatic ,logical ,relational 
print(type(i),type(f),type(c),type(name))

# list of keywords in python
print(keyword.kwlist)