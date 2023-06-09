# Pandas 
import pandas as pd;

path = R'C:\Users\abhay\Documents\GitHub\Language-Library\Python\Python Adv\Pandas Library\data.csv'
df = pd.read_csv(path)

print('DataFrame : \n\n',df)

# Inplace : Modify df if True
# DropNa Methode - Drop rows with Null Value
New_df = df.dropna(inplace=False)
print('DataFrame : \n\n',df)

# Fill Null Values
New_df = df.fillna(10)
