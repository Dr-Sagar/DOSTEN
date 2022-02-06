# Reduce Function 


from functools import reduce

k = (int(input("How many num. you want to give?\n")))

list1 = []
for i in range (k):
    list1.append(int(input()))

red = reduce(lambda x,y:x+y,list1)
print("The addition of all the elements is",red)