import time

tr = (time.time())

import matplotlib.pyplot as plt
from scipy import stats

x = [5,6,7,8,9]
y = [50,60,70,80,90]

slope, intercept, r, p, std_err = stats.linregress(x, y)

def myfunc(x):
  return slope * x + intercept

mymodel = list(map(myfunc, x))

plt.scatter(x, y)
plt.plot(x, mymodel)
print(time.time() - tr)
plt.show()
