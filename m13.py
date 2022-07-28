
# W.A.P to find the largest amoung 3 numbers

a=int(input("Enter the value of a \n"))
b=int(input("Enter the value of b \n"))
c=int(input("Enter the value of c \n"))

if(a>b and a>c):
    print("The largest number is",a)
elif(b>a and b>c):
    print("The largest number is",b)
else:
    print("The largest number is",c)


