
num1= int(input("Enter the first number:\n"))
num2= int(input("Enter the second number:\n"))
num3= int(input("Enter the third number:\n"))

if(num1>num2):
    if(num1>num3):
        print(num1,"is greater than",num2,"and",num3)
    else:
        print(num3,"is greater than",num1,"and",num2)
elif(num2>num1):
    if(num2>num3):
        print(num2,"is greater than",num1,"and",num3)
    else:
        print(num3,"is greater than",num1,"and",num2)
else:
    print("Three numbers are equel")
    
        