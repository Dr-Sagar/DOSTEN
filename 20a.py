
# // W.A.P to find the sum of digits of any given number

n=int(input("Enter any number\n"))
s=0

while(n>0):
    r=n%10
    s=s+r
    n=n//10

print("Sum of digits",s)
