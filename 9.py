
# // W.A.P to check a triangle wether it is equilateral ,scalen or isocles

a=(int(input("Enter a side of the triangle\n")))
b=(int(input("Enter a side of the triangle\n")))
c=(int(input("Enter a side of the triangle\n")))

if (a==b and b==c and c==a):
    print("This is an Equilateral Triangle")
elif(a!=b and b!=c and c!=a):
    print("This is an Scalen Triangle")
else:
    print("This is an Isocles Triangle")


