import turtle
from turtle import *
pensize(3)
def DrowC(color):
    penup()
    pendown()
    pencolor(color)
    fillcolor('red')
    begin_fill()
    left(180)
    forward(50)
    right(90)
    forward(100)
    right(90)
    forward(50)
    right(90)
    forward(25)
    right(90)
    forward(30)
    left(90)
    forward(50)
    left(90)
    forward(30)
    right(90)
    forward(25)
    end_fill()
    penup()
def DrowD(color):
    pencolor(color)
    setheading(90)
    left(45)
    pendown()
    forward(35)
    right(135)
    forward(30)#основание
    left(90)
    forward(75)
    right(90)
    forward(25)
    right(90)
    forward(75)
    left(90)
    forward(30)
    right(135)
    forward(35)
    penup()
def DrowN(color):
    pencolor(color)
    setheading(90)
    pendown()
    begin_fill()
    forward(100)
    right(90)
    forward(20)
    right(90)
    forward(40)
    left(90)
    forward(30)
    left(90)
    forward(40)
    right(90)
    forward(20)
    right(90)
    forward(100)
    right(90)
    forward(20)
    right(90)
    forward(40)
    left(90)
    forward(30)
    left(90)
    forward(40)
    right(90)
    forward(20)
    end_fill()
    penup()
penup()
goto(-325,200)
DrowC('green')
goto(-320, 100)
DrowD('red')
goto(-250,100)
DrowN('green')
mainloop()
