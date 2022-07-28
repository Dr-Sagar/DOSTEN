l=[10,20,30,40,50,60]
n=len(l)
if n%2==0:
    x=int(n/2-1)
    y=int(n/2)
    median=(l[x]+l[y])/2
else:
    x=int(n/2)
    median=l[x]
print(median)

