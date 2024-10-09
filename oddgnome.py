import sys

n = int(sys.stdin.readline().strip())

for _ in range(n):
    gnomes = list(map(int, sys.stdin.readline().strip().split()))
    for i in range(1, len(gnomes) - 1):
        if gnomes[i + 1] - gnomes[i] != 1:
            print(i + 1)
            break
