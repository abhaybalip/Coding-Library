# NumPy - Filter Array
import numpy as np

arr = np.array([0,1,2,3,4,5,6,7,8,9])
filter_arr = []

for element in arr:
    if element%2==0:
        filter_arr.append(True)
    else:
        filter_arr.append(False)

newarr = arr[filter_arr]

print('Filter Array : ',filter_arr)
print('New Array : ',newarr)