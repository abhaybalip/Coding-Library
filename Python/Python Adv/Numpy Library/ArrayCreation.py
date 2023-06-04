# python - numpy - Array Creation
import numpy as np;

# declare array
# array is declared by passing data with array function
l = [1,2,3,4,5,6,7]
a0 = np.array([1,2,3,4,5])
print(a0)
print(type(a0))

a1 = np.array(l)
print(a1)

a2 = np.array(l,dtype=int)
print(a2)

a3 = np.array([[1,3,4],[5,6,3]])
print(a3,'size = ',a3.size,'\n shape = ',a3.shape,'\n dim = ',a3.ndim)