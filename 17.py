
# // W.A.P to check a number wether it is prime or not

n=int(input("Enter any number\n"))
c=1
for i in range(1,n):
    if(n%i==0): 
        c=c+1     
if(c==2):
        print(n,"is a prime number")
else:
        print(n,"is not a prime number")

