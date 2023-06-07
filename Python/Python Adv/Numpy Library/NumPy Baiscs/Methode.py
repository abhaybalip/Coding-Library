import numpy as np;

def arrayInfo(arr):
    print('array = ',arr,type(arr))
    print('\n\tarray size = ',arr.size)
    print('\n\tarray shape = ',arr.shape)
    print('\n\tarray dim = ',arr.ndim)

def getArray(num):
    l = list()
    for i in range(num):
        l.append(i)
    a = np.array(l)
    return a