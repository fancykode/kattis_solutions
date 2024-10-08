import sys

N = int(sys.stdin.readline())
peashooters = list(map(int, sys.stdin.readline().strip().split()))
print(min(peashooters) + 1)
