# *args

def fun(normal,*args,**kol):
    for item in args:
        print(item)

    for key,value in kol.items():
        print(f"{key}is a {value}")


normal = "This is a normal Argument"
red = ["poy","lo","keoel"]


jex = {"gold":"Expensive","silver":"slighhtly cheaper"}
fun(*red,normal,**jex)