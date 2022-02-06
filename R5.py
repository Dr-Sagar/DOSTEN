import operator
# import true

# tup = ('Sqare')
L = [('pen',55.75),('Box',45.50),('Eraser',5.80)]
# print(L)
print(sorted(L,reverse=True,key=operator.itemgetter(1)))