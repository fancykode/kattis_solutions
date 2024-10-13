import sys

T = int(sys.stdin.readline().strip())

for x in range(T):
    n = int(sys.stdin.readline().strip())
    v1 = list(map(int, sys.stdin.readline().strip().split()))
    v2 = list(map(int, sys.stdin.readline().strip().split()))
    v1.sort()
    v2.sort(reverse=True)
    min_scal_prod = 0
    for i in range(len(v1)):
        min_scal_prod += v1[i] * v2[i]
    print(f"Case #{x + 1}: {min_scal_prod}")
