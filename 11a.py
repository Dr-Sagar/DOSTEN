
# // W.A.P to check a year wether it is leap year or not

y = int (input("Enter a year \n"))

if(y%100 != 0):
    if(y%4 == 0):
        print("This is a leap  year")
    else:
        print("This is not a leap year")

else:
    if(y%400 ==0):
        print("This is a leap year")
    else:
        print("This is not a leap year")



