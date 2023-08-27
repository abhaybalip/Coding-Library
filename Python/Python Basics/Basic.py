# python - basic

# import external library
import keyword

# output operation
a = 10
print("hello",a)

# input operation
a = int(input("Enter a Number"))
# or 
b = input("Enter a Number")
print(a,"\t",b)

# multiple/split input
m,n = input("Enter 2 No").split()

# data type : Number, bool, string 

# type casting
integer = int('10')
floatp  = float(3.5)
strs    = str('string')

# operator
# unary ,binary ,ternary ,arithamatic ,logical ,relational 

# list of keywords in python
print(keyword.kwlist)

# delete data
del  a,b,m,n,integer,floatp,strs