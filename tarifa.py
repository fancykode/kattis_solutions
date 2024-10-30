X = int(input())
N = int(input())

megs_available = 0
for _ in range(N):
    P = int(input())
    megs_available += X - P
megs_available += X
print(megs_available)
