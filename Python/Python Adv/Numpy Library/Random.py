# python - numpy - random array
import numpy as np;

# create array with random number with given shape
a0 = np.random.rand(5)
print(a0)
print(type(a0))

a1 = np.random.randint(10)
print(a1)

a2 = np.random.randint(0,10,(5,2))
print(a2)
print('shape = ',a2.shape)

help(np.random)