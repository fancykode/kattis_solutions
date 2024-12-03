from sys import stdin

N = int(stdin.readline())

gifts = 0
for d in range(1, N + 1):
    gifts += d * (d + 1) // 2

print(d * (d + 1) // 2)
print(gifts)
