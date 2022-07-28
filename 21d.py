
# // W.A.P to obtain the following series
# // d) s=factorial1+factorial2+factorial3+.........factorialn

n=int(input("Enter the value\n"))
s=0
for i in range (0,n+1):
    f=1
    for j in range (0,n+1):
        f=f*j
        s=s+f
print(s)

