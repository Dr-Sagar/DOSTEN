from turtle import*
t=Turtle()

wn=Screen()
wn.title("This is Turtle window")
# wn.bgcolor("yellow")
wn.bgpic("pop.gif")

t.shape("square")
t.color("red","green")

for i in range(9):
    t.forward(180)
    t.speed(1)
    t.left(90)


t.penup()
t.forward(200)
t.pendown()

for i in range(9):
    t.forward(180)
    t.speed(1)
    t.left(90)


t.penup()
t.forward(200)
t.pendown()

for i in range(9):
    t.forward(180)
    t.speed(1)
    t.left(90)

    
t.penup()
t.forward(200)
t.pendown()

for i in range(9):
    t.forward(180)
    t.speed(1)
    t.left(90)






done()