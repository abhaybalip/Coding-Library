# NumPy - Array Join
import numpy as np;

l = [0,1,2,3,4,5]
a0 = np.random.randint(0,10,(5))
print('Array : \n',a0)

a1 = np.random.randint(0,10,(5))
print('Array : \n',a1)

a2 = np.concatenate((a0,a1))
print('Joined Array : \n',a2)

a2 = np.concatenate((a0,a1),axis=0)
print('Joined Array : \n',a2,'axis - ')



arr1 = np.array([[1, 2], [3, 4]])

arr2 = np.array([[5, 6], [7, 8]])

arr = np.concatenate((arr1, arr2), axis=1)

print(arr)