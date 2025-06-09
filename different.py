from sys import stdin

while True:
    line = stdin.readline()
    if not line:
        break
    a, b = map(int, line.split())
    print(abs(a - b))
