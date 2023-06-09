# Pandas - File Data
import pandas as pd;

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\TestFile.json'
df = pd.read_json(path)

print(df)

print(df.loc[:,['Name','Department']])

print(df.iloc[:,0:4:2])

print('\n\n\n')

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\TestFile.csv'
df = pd.read_csv(path)

print(df)


# Rewrite data to file
df.to_json('OutputFile.json')