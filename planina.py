N = int(input())

p = 2
points_number = []
for i in range(0, 16):
    points_number.append(p * p)
    p = p + 2**i
print(points_number[N])
