import sys
import math

T = int(sys.stdin.readline().strip())

for _ in range(T):
    N = int(sys.stdin.readline().strip())
    width = int(math.sqrt(N + 1))
    if width % 2 == 0:
        width -= 1
    print(width // 2)
