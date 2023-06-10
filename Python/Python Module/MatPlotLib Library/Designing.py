# MatPlot - Marker
import matplotlib.pyplot as plt;
import numpy as np;

fig,ax = plt.subplots()

x = np.array([0,5,10])
y = np.array([0,5,10])

plt.plot(x+5,y,marker='o')
plt.plot(x,y,color='red')
plt.plot(x-5,y,linestyle=':')

# ShortHanding
plt.plot(x+10,y,'o:r',label='ShortHanding')

plt.show()

# ms - makersize
# mec - marker edge color 
# mfc - marker face color 