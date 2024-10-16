import sys
import math

T = int(sys.stdin.readline().strip())

for _ in range(T):
    N = int(sys.stdin.readline().strip())
    print(math.ceil(N / 400))
