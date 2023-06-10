# Pandas - Data Frame
import pandas as pd;

# Define DataFrame using dict
data = {
    'Name': ['John', 'Alice', 'Bob', 'Emily', 'David'],
    'Age': [28, 32, 45, 21, 36],
    'City': ['New York', 'London', 'Paris', 'Sydney', 'Tokyo'],
    'Salary': [50000, 65000, 80000, 45000, 70000]
}

df = pd.DataFrame(data,index=[1,2,3,4,5])
print('DataFrame : \n',df,'\n',type(df))


# Define DataFrame using list
data = [['John', 28, 'New York'], ['Alice', 32, 'London'], ['Bob', 45, 'Paris']]
# columns = ['Name', 'Age', 'City']

df = pd.DataFrame(data,columns=None)
df.columns = ['Name','Age','City']

print('New df : \n',df)