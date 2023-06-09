# Pandas - Data Analysation
import pandas as pd;

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\data.csv'
df = pd.read_csv(path)
print('Data Frame : \n\n',df)

# Top data
print(df.head())
print(df.head(10))

# Bottom data
print(df.tail())
print(df.tail(10))

# Info
print('Info : \n\n',df.info())

# Statistics
print('Mean : \n',df.loc[:,'Duration'].mean())
print('Median : \n',df.loc[:,'Duration'].median())
print('Mode : \n',df.loc[:,'Duration'].mode())

print('\n\n\n',df.mean())

# Co-Relation
print('\n\nCOrelation : \n',df.corr())