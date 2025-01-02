N = int(input())
result_len = 0
for _ in range(N):
    l = int(input())
    result_len += l
print(result_len - N + 1)
