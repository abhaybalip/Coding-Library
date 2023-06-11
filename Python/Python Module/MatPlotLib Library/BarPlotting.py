# MatPlot - Bar Plotting
import matplotlib.pyplot as plt;
import numpy as np;

x = np.array(['A','B','C'])
y = np.array([100,150,200])

# Parametre : height, width, color 
plt.bar(x,y)
plt.show()

# horizontal bar
plt.barh(x,y)
plt.show()