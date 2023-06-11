# MatPlot - Pie Chart

import matplotlib.pyplot as plt;
import numpy as np

y = np.array([35, 25, 25, 15])
label = np.array(['Pie1','Pie2','Pie3','Pie4'])
mycolor = np.array(["black", "red", "blue", "green"])
myexplode = np.array([0.2, 0, 0, 0])

plt.pie(y, labels=label, explode=myexplode, shadow=True)

# show description
plt.legend()

plt.show()