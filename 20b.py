
# // W.A.P to check a number wether it is arm strong or not

n=int (input("Enter any number\n"))
s=0

n1=n

while(n>0):
    r=n%10
    s=s+(r*r*r)
    n=n//10

if(n1==s):
    print(n1,"is a armstrong number")
else:
        print(n1,"is not a armstrong number")
