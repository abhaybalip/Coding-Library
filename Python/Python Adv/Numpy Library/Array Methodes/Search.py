# NumPy - Array Search

import numpy as np;

a0 = np.random.randint(0,9,(7))

a1 = np.array([0,1,2,3,4,5,6,7,8,9])
print('Array : ',a1)

num = np.where(a1==3)
print(num)

num = np.where(a1%2==0)
print('Event No : ',num)

num = np.where(a1%2!=0)
print('Odd No : ',num)