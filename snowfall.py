from sys import stdin

n = int(stdin.readline())

snow = 0
for i in range(n):
    t, a = map(int, stdin.readline().strip().split())
    if t == 0:
        snow += a
    elif t == 1:
        snow -= a
        if snow < 0:
            snow = 0
print(snow)
