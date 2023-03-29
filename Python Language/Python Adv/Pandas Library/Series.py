# python - Pandas - series
import numpy as np;
import pandas as pd;

l = [0,1,2,3,4]
a0 = np.array(l)
s0 = pd.Series(a0)
print(s0)
print(type(s0))

s1 = pd.Series(a0,index=['a','b','c','d','e'])
print(s1)