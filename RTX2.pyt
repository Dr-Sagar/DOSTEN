import random
l1=[]
for i in range (20):
    n=random.randint(0,100)
    l1.append (n)

print(l1)

num=int(input("EAN\n"))
for i in range (0,len(l1)):
    if l1 [i]==num:
        print (num ,"is found at",i)
