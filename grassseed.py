C = float(input())
L = int(input())

cost = 0.0
for _ in range(L):
    parts = input().strip().split(" ")
    width = float(parts[0])
    length = float(parts[1])
    cost += width * length * C
print(cost)
