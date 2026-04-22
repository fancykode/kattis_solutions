from sys import stdin

hours = [0] * 24

n, k = map(int, stdin.readline().split())

for _ in range(n):
    a, b = map(int, stdin.readline().split())
    for i in range(a, b):
        hours[i] += 1

ans = 0
for i in range(len(hours)):
    if hours[i] >= k:
        ans += 1
print(ans)
