
# W.A.P to find the Area of a Triangle using Heron's formulae

a=int(input("Enter a side\n"))
b=int(input("Enter another side\n"))
c=int(input("Enter another side\n"))

h=(a+b+c)/2
area=round(((h*(h-a)*(h-b)*(h-c))**0.5),2)
print("Area of the Triangle is",area)

   