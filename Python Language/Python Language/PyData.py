# python - data type

# list - index 0 ,mutable
from ctypes import sizeof


list = ["name",420,'A',400043]
print(type(list))
print(list.__sizeof__() )

print(list)
print(list[2])

# tuple - index 0  ,non mutable
tuple = ("name",420,'A',400043)
print(type(tuple))
print(tuple.__sizeof__() )

print(tuple)
print(tuple[2])

# set - random arragnment ,non mutable
# original maths set perations can be done
set = {"name",420,'A',400043}
print(type(set))
print(set.__sizeof__() )

print(set)

# dictionary - index as assigned ,mutable
dict = {1:"name",2:420,3:'A',4:400043}
dic = {"name":"user","no":420,"add":"earth",10:"end"}

print(type(dict))
print(dict.__sizeof__() )
print(type(dic))
print(dic.__sizeof__() )

dict[2] = 'S'
print(dict[2])