# python - iterator
List = [1,3,5,7]
print(type(List))

print("Using Iterator : ")
itr = iter(List)
print(next(itr))
print(next(itr))
print(next(itr))
print(next(itr))

print("Using for loop : ")
for element in List:
    print(element)

print("iterator + for loop : ")
for element in itr:
    print(element)

