# python - numpy - Identity Matrix
import numpy as np;

# create identity array
a0 = np.identity(3)
print(a0)
print(type(a0))

print('shape = ',a0.shape)
print('ndim = ',a0.ndim)
print('size = ',a0.size)

# zero array
a2 = np.zeros(5)
print(a2)
print(a2.shape)

# one array
a3 = np.ones(5)
print(a3)
print(a3.shape)