# python - numpy - Array Creation
import numpy as np;

# declare array
# array is declared by passing data with array function
l = [1,2,3,4,5,6,7]
a0 = np.array([1,2,3,4,5])
print('Array : ',a0,'\n\tsize : ',a0.size,'\n\tshape : ',a0.shape,'\n\tndim : ',a0.ndim)
print('Data Type : ',type(a0))

a1 = np.array(l)
print('Array : ',a1)

a2 = np.array(l,dtype=int)
print('Array : ',a2)

a3 = np.array([[1,3,4],[5,6,3]])
print('Array : ',a3,'\n\tsize = ',a3.size,'\n\tshape = ',a3.shape,'\n\tdim = ',a3.ndim)