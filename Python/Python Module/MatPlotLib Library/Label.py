# MatPlot - Labels
import numpy as np
import matplotlib.pyplot as plt

x = np.array([80, 85, 90, 95, 100, 105, 110, 115, 120, 125])
y = np.array([240, 250, 260, 270, 280, 290, 300, 310, 320, 330])

plt.plot(x,y,label=' Line Plotted ')

plt.xlabel(' X - Axis ')
plt.ylabel(' Y - Axis ')
plt.title('Line Plotting')

plt.show()

font1 = {'family':'serif','color':'red','size':10}
font2 = {'family':'serif','color':'green','size':15}

plt.xlabel(' X ',fontdict=font1)
plt.ylabel(' Y ',fontdict=font2)

plt.plot(x,y)
plt.show()