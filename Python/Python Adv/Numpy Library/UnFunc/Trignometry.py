# NumPy - Trignometry
import numpy as np;

print('pi = ',np.pi)
a0 = np.array([0,np.pi/6,np.pi/4,])

a1 = np.deg2rad(a0)
print('Radian : \n',a1)

print('Deg : \n',np.rad2deg(a1))

print('sine : \n',np.sin(a0))

print('cos : \n',np.cos(a0))

print('tan : \n',np.tan(a0))

base = 3
perp = 4
x = np.hypot(base, perp)

print('Hyp : ',x)