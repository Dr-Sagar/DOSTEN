

# // W.A.P to obtain the following series
# //  c) s=1+2+4+8+.....2^n

n=int(input("Enter a number\n"))
s=0
for i in range(0,n+1):
    s=s+pow(2,i)

    print(s)

