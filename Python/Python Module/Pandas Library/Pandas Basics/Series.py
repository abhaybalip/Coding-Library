# Pandas - series

import pandas as pd;

data = [0,1,2,3,4,5]

s = pd.Series(data)
print('Series : \n',s)

s = pd.Series(data,index=['a','b','c','d','e','f'])
print('Series : \n',s)

data = {
    'name':'MyName',
    'surname':'Surname',
    'age':19,
    'country':'india'
}
s = pd.Series(data)

print('New Series : \n',s)

# Indexing
print('Indexing : ',s[0],s[1],s[2])

# Slicing 
print('slicing : ',s[0:len(data):1])