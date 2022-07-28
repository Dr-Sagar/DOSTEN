a=int(input("lo\n"))
b=int(input("lo\n"))
c=int(input("lo\n"))

h=(a+b+c)/2
ar=(round((h*(h-a)*(h-b)*(h-c))**0.5),2)
print(ar)