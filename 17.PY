from logging import logProcesses
from ntpath import join
from matplotlib.pyplot import uninstall_repl_displayhook
from numpy import number


s = (int(input("Enter the number\n")))
if s > 1:
    for i in range(2, s):
        if (s % i) == 0:
            print("This is not a prime number")
        else:
            print("This is a prime number")
else:
    print("This is not a prime number")
uninstall_repl_displayhook
