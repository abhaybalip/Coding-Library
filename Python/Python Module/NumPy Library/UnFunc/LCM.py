# NumPy - lcm
import numpy as np;

a0 = np.random.randint(10,size=(5))
print('Array : ',a0)

print('lcm : ',np.lcm.reduce(a0))

arr = np.arange(1, 11)

x = np.lcm.reduce(arr)

print(arr,' : ',x)