import sys

N = int(sys.stdin.readline().strip())
x = list(map(int, sys.stdin.readline().strip().split()))
towers = 1

for i in range(1, len(x)):
    if x[i - 1] < x[i]:
        towers += 1
print(towers)
