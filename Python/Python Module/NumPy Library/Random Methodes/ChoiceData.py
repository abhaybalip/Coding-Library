# NumPy - Choice
import numpy as np;

# Array from given num
arr = np.random.choice([-1,0,1],size=(3,3))
print('Array : \n',arr)

# Define Probability for data to occur
arr = np.random.choice([-1,0,1],size=(3,3),p=[1/3,1/3,1/3])

print('Array : \n',arr)
print('count 1 : ',np.count_nonzero(arr>0))
print('count -1 : ',np.count_nonzero(arr<0))
print('count 0 : ',np.count_nonzero(arr==0))