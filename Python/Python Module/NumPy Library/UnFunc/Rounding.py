# NumPy - Rounding

import numpy as np;

a0 = np.random.rand(5)
a0 *= 10

print('Array : ',a0)

print('Truncate : ',np.trunc(a0))

print('Ceil : ',np.ceil(a0))

print('Floor : ',np.floor(a0))

print('Around : ',np.around(a0))