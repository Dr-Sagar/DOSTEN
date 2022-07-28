
# // W.A.P to find the larger amoung three numbers using conditional operator

a=(int(input("Input a number\n")))
b=(int(input("Input a number\n")))
c=(int(input("Input a number\n")))

d  = (  (a if a>c else c)  if a > b      else  ( b if b>c else c) )


print(d,"is the largest number")