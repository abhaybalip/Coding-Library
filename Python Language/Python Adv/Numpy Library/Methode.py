import numpy as np;

def arrayInfo(arr):
    print(arr,type(arr))
    print(arr.size)
    print(arr.shape)
    print(arr.ndim)

def getArray(num):
    l = list()
    for i in range(num):
        l.append(i)
    a = np.array(l)
    return a