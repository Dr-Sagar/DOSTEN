

import random

print("Enter the Range (Interval): ")
a = int(input())
b = int(input())

if a>b:
  #t = a
  a = b
  b = a


print("\nHow Many Random Numbers to Generate ? ")   
t = int(input())

randnums = [t]
for i in range(t):
  print(randnums.append (random.randint (a,b)))

  print("\n List of",+int(t),"Random Numbers between",+int(a)," and ",+int(b),"is")

for i in range(t):
  print(randnums[i],)
  print()