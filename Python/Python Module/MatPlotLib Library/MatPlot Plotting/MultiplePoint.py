# MatPlot - Multiple Points
import matplotlib.pyplot as plt;

fig,ax = plt.subplots()

x_pts = [0,1,2,3,4]
y_pts = [0,1,2,3,4]

ax.set_label('Plotting Multiple Point : ')
ax.set_xlabel('x-Axis')
ax.set_ylabel('y-Axis')

ax.scatter(x_pts,y_pts)
plt.show()