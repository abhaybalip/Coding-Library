# SciPy - Data Sparce

# There are primarily two types of sparse matrices that we use:
# CSC - Compressed Sparse Column. For efficient arithmetic, fast column slicing.
# CSR - Compressed Sparse Row. For fast row slicing, faster matrix vector products

import scipy.sparse as ss;
import numpy as np;

arr = np.array([1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0])
print('Array : \n',arr,'\n\n')

a = ss.csr_matrix(arr)
print('Sparced Matrix : \n',a,'\n\n')

a = ss.csr_array(arr)
print('Sparced Array : \n',a,'\n\n')

arr = np.array([[0, 0, 0], [0, 0, 1], [1, 0, 2]])

print('Sparced Matrix : \n\n',ss.csr_matrix(arr).data)