



import random
lower = "abvchelsgfosdnbdosnhf"
upper = "GBVUDHODJOSHOHUHDIDUWHDI"
NUMBER = "0123456789"
symbol = "[]{}#()*;,-_"

all=lower+upper+NUMBER+symbol
length = 9
password ="".join(random.sample(all,length))
print("The password=",password)






 