def sq(a):
    return a*a

num = [2,3,5,6,76,3,3,2]
sqare = list (map(sq,num))
print (sqare)





num = [2,3,5,6,76,3,3,2]
sqare = list (map(lambda x:x*x,num))
print (sqare)