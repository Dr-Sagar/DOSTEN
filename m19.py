
# W.A.P to find a number, wether it is prime or not

c=0
n=int(input("Enter any number\n"))


for i in range(1,n+1):
    if (n%i==0):

        c=c+1
if(c==2):
        print("This is a prime number")
else:
        print("This is not a prime number")
