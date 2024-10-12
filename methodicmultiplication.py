import sys

x = sys.stdin.readline().strip()
y = sys.stdin.readline().strip()

x = x.count("S")
y = y.count("S")
t = x * y

print(("S(" * t) + "0" + (")" * t))
