import math

d = int(input())
a = int(input())
b = int(input())
h = int(input())

trapizza = h * ((b + a) * 0.5)
mahjong = math.pi * d * d / 4.0

if trapizza > mahjong:
    print("Trapizza!")
elif mahjong > trapizza:
    print("Mahjong!")
else:
    print("Jafn storar!")
