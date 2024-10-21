import sys

N = int(sys.stdin.readline().strip())
t = list(map(int, sys.stdin.readline().strip().split()))
t.sort(reverse=True)

for i in range(len(t)):
    t[i] += i + 1

print(max(t) + 1)
