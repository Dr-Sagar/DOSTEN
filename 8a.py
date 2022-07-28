
# // W.A.P to find the larger amoung three numbers using ladder if else 

a=(int(input("Input a number\n")))
b=(int(input("Input a number\n")))
c=(int(input("Input a number\n")))

if(a>b and a>c):
     print(a," is the largest number")
elif(a<b and b>c):
     print(b," is the largest number")
else:
     print(c," is the largest number")

