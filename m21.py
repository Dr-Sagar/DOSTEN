
# prime or not prime with while loop

s=0
n=int(input("Input a number\n"))
n1=n

while(n>0):
    r=n%10
    s=r+(s*10)
    n=n//10
if(n1==s):
    print(n1,"is prime number")
else:
    print(n1,"is not prime number")