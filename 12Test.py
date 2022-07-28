value1,operation,value2=((int(input()),(input()),(int(input()))))
def calculator(operation, value1, value2):

   switcher = {

       "*": value1*value2,

       "/": value1/value2,

       "+": value1+value2,

       "-": value1-value2 

   }

   return switcher.get(operation, "Invalid Operation! Please try again.")

print(calculator("+", 5, 10))

print(calculator("*", 5, 10))

print(calculator("#", 5, 10))