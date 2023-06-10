# properties of array
import numpy as np;

# ndim : no of diamension
l = [1,3,4,5,6,3]
a0 = np.array(l,ndmin=1)
print('Array : ',a0,'\nArray shape : ',a0.shape)

print('\n')

# shape of array : no of row and col
l2 = [l,l,l]
a1 = np.array(l2)
print(a1,'Array shape : ',a1.shape,'\ndim : ',a1.ndim)

# size of array : total no of elements
print('Array size : ',a0.size)
print(a1.size)