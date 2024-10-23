N = int(input())
distances = input().strip().split(" ")

sum_num = {}
for i in range(1, 7):
    for j in range(1, 7):
        sum = i + j
        sum_num[sum] = sum_num.get(sum, 0) + 1

total_num = 0
for v in sum_num.values():
    total_num += v

result = 0
for dist in distances:
    if int(dist) in sum_num:
        result += sum_num[int(dist)]

print(result / total_num)
