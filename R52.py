# Python Decorators

def dec1(func1):
    def nowexec():
        print("Executing now")
        func1()
        print("Executed")
    return nowexec

@dec1
def red():
    print("Ritesh is the King")

# red = dec1(red)
red()


