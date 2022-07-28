
# // W.A.P to find the perimeter and area of triangle

a=int(input("Enter value of a\n"))
b=int(input("Enter value of b \n"))
c=int(input("Enter value of c \n"))
    
p=a+b+c
s=p/2
area=(s*(s-a)*(s-b)*(s-c))
print("The peremeter of Triangle is",p,"\t The area of the Triangle is",area)


