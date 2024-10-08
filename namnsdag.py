import sys

name = sys.stdin.readline().strip()
N = int(sys.stdin.readline().strip())

for d in range(N):
    n = sys.stdin.readline().strip()
    if len(name) == len(n):
        diff = 0
        for i in range(len(name)):
            if name[i] != n[i]:
                diff += 1
        if diff <= 1:
            print(d + 1)
            break
