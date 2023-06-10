# NumPy - Set
import numpy as np;

a0 = np.random.randint(10,size=(5))
a1 = np.random.randint(10,size=(5))

print('Array :\n',a0,'\n',a1)

print('Union :\n',np.union1d(a0,a1))

print('Intersection :\n ',np.intersect1d(a0,a1))

print('Difference :\n',np.setdiff1d(a0,a1,assume_unique=True))