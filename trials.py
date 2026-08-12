import math

a = int(input())
b = int(input())
c = int(input())
s = (a + b + c) / 2.0
A = math.sqrt(s * (s - a) * (s - b) * (s - c))
print(A)
