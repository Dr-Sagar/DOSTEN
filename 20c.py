
# // W.A.P to obtain the reverse of any given number

n=int(input("Enter any number\n"))
s=0
while(n>0):
    r=n%10
    s=r+(s*10)
    n=n//10

print("The Reverse is",s)
