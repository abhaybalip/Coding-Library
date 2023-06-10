# MatPlot - Line Plotting
import matplotlib.pyplot as plt;

fig,ax = plt.subplots()

x_pts = [0,1,4,5]
# corresponding (x,y)
y_pts = [1,0,5,4]

ax.set_xlabel('x-Axis')
ax.set_ylabel('y_Axis')
ax.set_title('Plotting Line : ')

plt.plot(x_pts,y_pts)
plt.show()