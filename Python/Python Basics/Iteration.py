# python - Iteration

list = [0,1,2,3,4,5]

# iteration => itertor in iterable
for i in list:{
    print(i,end=' ')
}
print('')

dict = {
    'id': 1,
    'name': 'my_self'
}

for key,value in dict.items() :{
    print(key,' : ',value,end=' ')
}

# iterator object

i = iter(list)
key,value = iter(dict.items())