# Filter function

lis = [1,2,3,4,5,6,7,8,9]

def isg5(num):
    return num>5

isg5 = list(filter(isg5,lis))

print(isg5)



lis = [1,2,3,4,5,6,7,8,9]

isg5 = list(filter(lambda x:x>5 ,lis))

print(isg5)