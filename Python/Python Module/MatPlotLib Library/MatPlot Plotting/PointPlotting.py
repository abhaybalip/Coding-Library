# MatPlot - Point Plotting
import matplotlib.pyplot as plt;
import numpy as np;

# Create Figure and Axis
fig, ax = plt.subplots()

print(type(fig))
print(type(ax))

# Points to plot
x,y = 10,10

# set axis label and title
ax.scatter(x,y,color='red',marker='o')
ax.set_xlabel('x')
ax.set_ylabel('y')

ax.set_title('Plotting Point :')
plt.show()