
# // a) W.A.P to input few elements in an array & display those elements

import array as rev
a=rev.array('i',[])
n= int(input("Enter no. of Elements:"))
print("Enter Array Elemets")
for i in range(0,n):
    number=int (input())
    # number=number+1
    a.append(number)
print("Array elements are:")
for i in a:
    print(i)
