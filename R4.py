import operator

L = [('Ram',51,100.5),('Ajay',41,200.5),('Ak',90,900.5)]
T = (['Ram',34,100],['Ajay',41,200])

# print (sorted(T))
print (sorted(L,key=operator.itemgetter(2)))