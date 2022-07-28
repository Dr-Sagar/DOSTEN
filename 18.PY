# Palindrome or not
a = input("enter sequence\n")
b = a[::-1]
if a == b:
    print("palindrome")
else:
    print("not palimdrome")
