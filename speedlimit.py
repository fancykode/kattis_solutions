import sys

while True:
    n = int(sys.stdin.readline().strip())
    if n == -1:
        break
    prev_t = 0
    dist = 0
    for _ in range(n):
        s, t = map(int, sys.stdin.readline().strip().split())
        dist += s * (t - prev_t)
        prev_t = t
    print(f"{dist} miles")
