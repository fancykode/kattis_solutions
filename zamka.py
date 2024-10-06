def digits_sum(n):
    sum = 0
    while n != 0:
        digit = n % 10
        sum += digit
        n //= 10
    return sum


L = int(input())
D = int(input())
X = int(input())

for n in range(L, D + 1):
    if X == digits_sum(n):
        print(n)
        break
for m in range(D, L - 1, -1):
    if X == digits_sum(m):
        print(m)
        break
