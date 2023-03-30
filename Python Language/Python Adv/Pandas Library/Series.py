# python - pandas - series
# series is a collection of data that represents a column in data frame
import pandas as pd;
import numpy as np;

array = np.random.rand(5)
print('sample array - ',array)

# declaring series
series = pd.Series(array)
print('series = \n',series)

# series with different index
series1 = pd.Series(array,index=['a','b','c','d','e'])
print('series2 = \n',series1)

series2 = pd.Series(['a','b','c'],index=[1,2,3])
print('series3 = \n',series2)

def getSeries(num):
    l = list()
    for i in range(num+1):
        l.append(i)
    array = np.array(l)
    series = pd.Series(array)
    return series