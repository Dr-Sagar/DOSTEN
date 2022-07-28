
# // W.A.P to check a number wether it is palimdrome or not

n=int(input("Give the input\n"))
s=0
n1=n

while(n>0):
    r=n%10
    s=r+(s*10)
    n=n//10

if (n1==s):
    print(n1,"is a palindrome")
else:
    print(n1,"is not a palindrome")