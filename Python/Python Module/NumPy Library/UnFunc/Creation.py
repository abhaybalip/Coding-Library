# NumPy - UnFunc

import numpy as np;

def add(a,b):
    return a+b

print('Function Type : ',type(add))

add = np.frompyfunc(add,1,1)

print('Function Type : ',type(np.add))

a0 = np.random.randint(10,size=(1,5))

a1 = np.random.permutation(a0)

print('Array : ',a0)
print('Array : ',a1)

num = np.add(a0,a1)

print('Ans : ',num)