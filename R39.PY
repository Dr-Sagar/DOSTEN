me = "Ritesh"
a1 = 3

a = "This is %s"%me
print (a)


a = "This is {} {}"
# a = "This is {1} {0}"
b = a.format(me,a1)
print(b)



a = f"This is {me} {a1}\n{4*65}"
print(a)


