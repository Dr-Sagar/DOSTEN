num= (int('How many numbers\n'))
total_sum=0
for n in range (num):
    numbers=float (input('Enter number:\n'))
    total_sum+=numbers
avg =total_sum/num
print("Average of",num,"numbers is:",avg)