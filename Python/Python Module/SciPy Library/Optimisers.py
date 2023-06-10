# Scipy - Optimisers
# Optimizers are a set of procedures defined in SciPy that 
# either find the minimum value of a function, or the root of an equation.

import scipy.optimize as so;
import math as m;

def fcn(x):
    return m.cos(x)

MyRoot = so.root(fcn,0)
print(MyRoot.x)

MyRoot = so.minimize(fcn,0)
print(MyRoot)

def eqn(x):
  return x**2 + x + 2

mymin = so.minimize(eqn,0, method='BFGS')

print(mymin)