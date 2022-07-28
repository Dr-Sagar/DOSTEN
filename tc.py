a=(int(input("Enter Temperature\n")))
x=(input("°C[Ceicius]or F°[Farenheit]\t"))

c1=(5*(a-32))/9
f1=((9*a)+160)/5




# def cod():
#     return (print(f1))
# def fod():
#     return (print(c1))
# def string(x):
#     switch={
#         'c':cod(),
#         'f':fod(),
#     }
#     return switch.get(str)

print(a,'°',x)


if(x=='c'):
    print(f1,"°f")
elif(x=='f'):
    print(c1,"°c")
else:
    print("invalid syntax")


k1=(c1+273.15)
k2=(((f1-32)*5)/9)+273.15

if(x=='c'):
    print(k2,"k")
elif(x=='f'):
    print(k1,"k")
else:
    print("invalid syntax")
