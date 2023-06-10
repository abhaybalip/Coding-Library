# Pandas
import pandas as pd;

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\data.csv'
df = pd.read_csv(path)

print('DataFrame : \n\n',df)
print('Dplicates : \n',df.duplicated())

# change original data frame
df = df.drop_duplicates(inplace=True)

print('New Df: \n\n',df)
print(df.info())