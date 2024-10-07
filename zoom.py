n, k = map(int, input().split())
x = list(map(int, input().split()))

result = []
for i, num in enumerate(x, start=1):
    if i % k == 0:
        result.append(str(num))
print(" ".join(result))
