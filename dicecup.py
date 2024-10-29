N, M = map(int, input().split())

sum_num = {}
max_num = 0
for i in range(1, N + 1):
    for j in range(1, M + 1):
        sum = i + j
        sum_num[sum] = sum_num.get(sum, 0) + 1
        max_num = max(max_num, sum_num[sum])


sums = []
for k, v in sum_num.items():
    if v == max_num:
        sums.append(k)

sums.sort()
for sum in sums:
    print(sum)
