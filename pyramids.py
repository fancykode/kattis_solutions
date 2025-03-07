import sys

N = int(sys.stdin.readline())
i = 1
blocks_used = 0
height = 0

while True:
    blocks_used += i * i
    i += 2
    height += 1
    if blocks_used == N:
        break
    if blocks_used > N:
        height -= 1
        break
print(height)
