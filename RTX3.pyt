a=[5,10,5,10,15,15,20,25,25,30]
b=[]
for i in a:
    if i not in b:
        b.append(i)
a=b
print(a)