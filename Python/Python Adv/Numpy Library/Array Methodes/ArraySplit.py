# NumPy - Array split

import numpy as np;

a0 = np.random.randint(0,9,(10))
print('Array : \t',a0)

a1,a2 = np.split(a0,2)

print('Splited Array : ',a1,'\n\t',a2)

print('Array split/ 5 : \n',np.split(a0,5))