# python - numpy - random array
import numpy as np;

# create array with random number with given shape
a0 = np.random.rand(5)
print('Random Array : \n',a0)
print('Data Type : ',type(a0))

a1 = np.random.randint(10)
print('Random int : ',a1)

a2 = np.random.randint(0,10,(3,3))
print('Random int Array : \n',a2)
print('shape : ',a2.shape)
