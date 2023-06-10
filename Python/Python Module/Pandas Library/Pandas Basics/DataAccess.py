# Pandas - Data Accessing
import pandas as pd;

data = {
    'Name': ['John', 'Alice', 'Bob', 'Emily', 'David'],
    'Age': [28, 32, 45, 21, 36],
    'City': ['New York', 'London', 'Paris', 'Sydney', 'Tokyo'],
    'Salary': [50000, 65000, 80000, 45000, 70000]
}
df = pd.DataFrame(data)

# Loc Methode - Access data by index and col name
# Syntax : loc[row,[column]]
print(df.loc[:,'Name'])

print(df.loc[0:3:1,['Name','Age']])

print('\n\n\n')

# Iloc Methode - Accesss data by index
print(df.iloc[:,0:4:2])