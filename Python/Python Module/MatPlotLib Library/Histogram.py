# MatPlot - Histogram

import matplotlib.pyplot as plt;
import numpy as np

x = np.random.normal(170, 10, 250)

print('x : ',x)
plt.hist(x)
plt.show() 
