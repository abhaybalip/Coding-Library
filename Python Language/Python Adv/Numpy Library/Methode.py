import numpy as np;

def arrayInfo(arr):
    print('array = ',arr,type(arr))
    print('array size = ',arr.size)
    print('array shape = ',arr.shape)
    print('array dim = ',arr.ndim)

def getArray(num):
    l = list()
    for i in range(num):
        l.append(i)
    a = np.array(l)
    return a