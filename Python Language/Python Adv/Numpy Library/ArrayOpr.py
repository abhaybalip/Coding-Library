# python - numpy - array operations
import numpy as np;
import Methode as m;

a0 = np.zeros(5)
# m.arrayInfo(a0)

a1 = np.ones(5)
# m.arrayInfo(a1)

# operations :
a = a0 + a1
m.arrayInfo(a)

a = a0 - a1
m.arrayInfo(a)

a2 = a1
a = a1 * a2
m.arrayInfo(a)