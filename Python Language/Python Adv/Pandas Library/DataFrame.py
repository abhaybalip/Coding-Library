# python - pandas - data frame
import numpy as np;
import pandas as pd;
import Series as s;

series = s.getSeries(10)
df = pd.DataFrame(series)

# declre data frame using series
print('data frame = ',df)
print('df size = ',df.size)

# create data frame using set

info = {'name':['abhay'],'id':[3],'gen':['m']}
info2 = {'name':['daji'],'id':[1],'gen':['m']}
info3 = {'name':['rohit'],'id':[2],'gen':['m']}

# print(type(info))

df2 = pd.DataFrame.from_dict(info)
print('df2 = \n',df2)

# add new dict to df2
df2 = df2.append(info2, ignore_index=True)

print('new df2 = \n',df2)