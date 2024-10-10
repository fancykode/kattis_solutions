import sys

N = int(sys.stdin.readline().strip())
d = list(map(int, sys.stdin.readline().strip().split()))
result = [0 for _ in range(N)]
result[0] = 1

id = 2
for i in range(len(d)):
    result[d[i] + 1] = id
    id += 1

print(" ".join(str(item) for item in result))
