from sys import stdin
import math

t = int(stdin.readline())

for _ in range(t):
    a = set(stdin.readline().strip())
    b = stdin.readline().strip()
    yes = True
    for l in b:
        if l not in a:
            yes = False
            break
    if yes:
        print("YES")
    else:
        print("NO")
