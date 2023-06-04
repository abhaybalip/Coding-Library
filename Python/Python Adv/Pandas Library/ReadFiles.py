# python - pandas - read files
import pandas as pd;

# read json filr
df = pd.read_json(R'C:\Users\abhay\Documents\GitHub\Code-Book\Test Files\Test_js.json')
print(df)
for i in df:
    for j in i:
        print(j)

print(df.columns)