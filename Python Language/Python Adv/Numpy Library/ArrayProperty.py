# properties of array
import numpy as np;

# ndim : no of diamension
l = [1,3,4,5,6,3]
a0 = np.array(l,ndmin=1)
print(a0,a0.shape)

print('\n')

# shape of array : no of row and col
l2=[l,l,l]
a1 = np.array(l2)
print(a1,'shape = ',a1.shape,'dim = ',a1.ndim)

# size of array : total no of elements
print(a0.size)
print(a1.size)