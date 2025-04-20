import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('results/output.csv')

plt.plot(data['shareId'], data['isMainChain'])
plt.xlabel('Share ID')
plt.ylabel('Main Chain Status (1=Main, 0=Uncle)')
plt.title('Blockchain Share Propagation Analysis')
plt.grid(True)
plt.show()
