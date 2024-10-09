import sys

n, T = map(int, sys.stdin.readline().strip().split())
tasks = list(map(int, sys.stdin.readline().strip().split()))

completed = 0
for task in tasks:
    if T - task >= 0:
        T -= task
        completed += 1
    else:
        break
print(completed)
