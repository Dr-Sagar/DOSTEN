
# // W.A.P to find the factorial of any given numbers

n=int(input("Input number to find factorial\n"))


for i in range (1,n):
    if(n%i==0):
        print(i,"is a factorial of",n)
