# NumPy - Random

import numpy as np;

num = np.random.rand()
print('Random Num : ',num)

num = np.random.randint(10)
print('Random int : ',num)

# Array from Random int 
num = np.random.randint(100,size=(5))
print('Array : ',num)

num = np.random.randint(100,size=(3,3))
print('Array : \n',num)