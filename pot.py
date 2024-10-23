N = int(input())

result = 0
for _ in range(N):
    number = int(input())
    pow = number % 10
    p = number // 10
    result += p**pow
print(result)
