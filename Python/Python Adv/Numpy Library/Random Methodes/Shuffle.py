# NumPy - Shuffle
import numpy as np;

l = [0,1,2,3,4,5]
arr = np.array(l)
print('Array : ',arr)

# Here original array is changed
np.random.shuffle(arr)
print(' shuffle : ',arr)

# Here original array is not changed
arr = np.random.permutation(arr)
print(' Permutation : ',arr)