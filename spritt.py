import sys

line_parts = sys.stdin.readline().split(" ")
n, x = int(line_parts[0]), int(line_parts[1])

for _ in range(n):
    a = int(sys.stdin.readline())
    x -= a

if x >= 0:
    print("Jebb")
else:
    print("Neibb")
