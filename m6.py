
# W.A.P that generates 5 random numbers from 10-50

import random
import time

random.seed(6)
for i in range(5):
        print(random.randint(10,50))



        
t=int(time.time())
random.seed(t)
for i in range(5):
        print(random.randint(10,50))