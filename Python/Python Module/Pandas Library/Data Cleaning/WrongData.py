# Pandas 
import pandas as pd;

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\data.csv'
df = pd.read_csv(path)

print('DataFrame : \n\n',df,'\n\n\n')

# Data Cleaning
max = df.loc[:,'Duration'].median()
mean = df.loc[:,'Duration'].mean()
count = 0
for val in df.index:
    if(df.loc[val,'Duration'] > max):
        df.loc[val,'Duration'] = mean
        count+=1
        print('Data Changed !',count)


# Remove Null rows
count = 0
max = df.loc[:,'Pulse'].mode()
for val in df.index:
    if(df.loc[val,'Pulse'] > max):
        df.drop(val)
        count+=1
        print('Row Removed !',count)