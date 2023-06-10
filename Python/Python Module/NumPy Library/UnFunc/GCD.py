# NumPy - gcd

import numpy as np;

arr = np.arange(1, 11)

x = np.lcm.reduce(arr)

print(x)

a0 = np.arange(0,7)

print('Array : ',a0)

print('gcd : ',np.gcd.reduce(a0))