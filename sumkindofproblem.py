import sys

P = int(sys.stdin.readline())

for line in sys.stdin:
    line_parts = line.strip().split()
    K = int(line_parts[0])
    N = int(line_parts[1])
    S1, S2, S3 = 0, 0, 0
    S1 = N * (N + 1) // 2
    S2 = N * N
    S3 = N * (N + 1)
    print(f"{K} {S1} {S2} {S3}")
