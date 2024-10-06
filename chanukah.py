import sys

P = int(sys.stdin.readline())

for line in sys.stdin:
    K, N = line.strip().split(" ")
    K, N = int(K), int(N)
    result = (N / 2) * (2 + (N - 1)) + N
    print(f"{K} {int(result)}")
