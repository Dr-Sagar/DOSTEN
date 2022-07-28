
# Reverse

s=0
n=int(input("Enter any number\n"))

while(n>0):
    r=n%10
    s=r+(s*10)
    n=n//10

print("The reverse is ",s)