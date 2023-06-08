# Pandas - Data Frame
import pandas as pd;

data = {
    'id':[1,2,3],
    'age':[20,20,20],
    'score':[9,8,10]
}
df = pd.DataFrame(data)

print('Data :\n',data)
print('DataFrame :\n',df)

df = pd.DataFrame(columns=['id','name'])

df.loc[0] = [1,'Daji']
df.loc[1] = [2,'Rohit']
df.loc[2] = [3,'Abhay']

print('New DF : \n',df)

# Add New Column
df.insert(2,'City',['Panvel','Thane','Mumbai'])

print('New DF : \n',df)