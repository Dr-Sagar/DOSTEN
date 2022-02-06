L = [(),('A',5),('B',7),(),(),('C',9),()]

L1 = []
for  i in L:
    if len(i)!=0:
        L1.append(i)
print (L1)