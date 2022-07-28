import time

r = time.time()

import pandas as pd
  
  
# reading the database
data = pd.read_csv("tips.csv")
  
# printing the top 10 rows
display(data.head(10))


print(time.time() - r)