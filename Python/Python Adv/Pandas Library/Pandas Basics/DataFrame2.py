# Pandas - Data Frame
import pandas as pd;

data = data = {
    'Name': ['John', 'Emily', 'Sam', 'Sara'],
    'Age': [25, 30, 28, 35],
    'City': ['New York', 'London', 'Paris', 'Sydney']
}
df = pd.DataFrame(data)

print('DataFrame : \n',df)

print(df.iloc[0])