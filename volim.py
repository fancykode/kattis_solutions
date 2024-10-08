import sys

K = int(sys.stdin.readline())
N = int(sys.stdin.readline())

seconds_left = 3 * 60 + 30
for _ in range(N):
    T, answer = sys.stdin.readline().strip().split()
    T = int(T)
    seconds_left -= T
    if seconds_left <= 0:
        break
    if answer == "T":
        K += 1
        K = 1 if K == 9 else K
print(K)
