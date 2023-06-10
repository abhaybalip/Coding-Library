# MatPlot - Multiple Line plotting
import matplotlib.pyplot as plt;

fig,ax = plt.subplots()

x,y = [0,5],[0,2]
x1,y1 = [0,2],[0,5]

plt.plot(x,y,color='green')
plt.plot(x1,y1,color='blue')

plt.show()