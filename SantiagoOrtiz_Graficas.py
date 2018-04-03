import numpy as np
import matplotlib.pyplot as plt

py= genfromtxt("times_python.csv",delimiter=",")
c=genfromtxt("times_cpp.csv",delimiter=",")

plt.plot(np.transpose(py)[0],np.transpose(py)[1],label="Python")
plt.plot(np.transpose(c)[0],np.transpose(c)[1],label="C++")
plt.title("Tiempos de creacion de datos en C++ y python")
plt.xlabel("Numero")
plt.ylabel("Tiempo")
plt.legend()
plt.savefig("cpp_vs_python.png")
