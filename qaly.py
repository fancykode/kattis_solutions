import sys

N = int(sys.stdin.readline())

result = 0.0
for i in range(0, N):
    q, y = map(float, sys.stdin.readline().split())
    result += q * y
print(result)
