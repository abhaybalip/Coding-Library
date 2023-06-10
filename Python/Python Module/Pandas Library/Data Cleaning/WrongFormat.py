# Pandas 
import pandas as pd;

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\data.csv'
df = pd.read_csv(path)

print('DataFrame : \n\n',df,'\n\n\n')

df['Date'] = pd.to_datetime(df['Date'])

print(df)

