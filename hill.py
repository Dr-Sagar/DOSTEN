t,o,y=((int(input("Enter 1st num\t"))),(str(input("Enter Operator\t"))),(int(input("Enter 2nd num\t"))))
# o=input("Enter operator")
# y=int(input("Enter the second value"))

if(o=="+"):
    print("The result is")
    print(t+y)
elif(o=="-"):
    print("The result is")
    print(t-y)
elif(o=="*"):
    print("The result is")
    print(t*y)
elif(o=="/"):
    print("The result is")
    print(t//y)
else:
    print("Structure statement is invalid")
