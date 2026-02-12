from sys import stdin

n, e = map(int, stdin.readline().strip().split())

substr = str(2**e)
count = 0
for i in range(0, n + 1):
    if substr in str(i):
        count += 1

print(count)
