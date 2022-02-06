def fun(*args):
    print(type(args))
    print(args)
    print(type(args[0]))
    print(args[0:])

red = ["falcon","skillf","loader","ihdojdo"]
fun(*red)