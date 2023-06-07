# python - numpy - array slicing
import numpy as np;
import Methode as m;

l = [1,2,4,5,6,7,0]
a0 = np.array(l)
m.arrayInfo(a0)

print('Array : ',end=' ')
for i in a0:
    print(i,end=' ')

print()
print(a0[0])

# Array Slicing
# start : end : step
print(a0[0:7:1])

print(a0[0:7:2])