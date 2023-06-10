# MatPlot - PyPlot

# The plot() function is used to draw points (markers) in a diagram.
# By default, the plot() function draws a line from point to point.
import matplotlib.pyplot as plt;
import numpy as np;

print(plt)
print(type(plt))

# define x and y
x = np.array([0,0])
y = np.array([0,250])

# plotting
plt.plot(x,y)

# display graph
plt.show()

# Plotting Points
xpoints = np.array([1, 8])
ypoints = np.array([3, 10])

plt.plot(xpoints, ypoints, 'o')
plt.show()

# Plotting multiple points
xpoints = np.array([1, 2, 6, 8])
ypoints = np.array([3, 8, 1, 10])

plt.plot(xpoints, ypoints)
plt.show()

# Plotting without x pts
ypoints = np.array([3, 8, 1, 10, 5, 7])

plt.plot(ypoints)
plt.show()