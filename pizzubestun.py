from sys import stdin

n = int(stdin.readline())

prices = []
for i in range(n):
    parts = stdin.readline().split()
    name = parts[0]
    price = int(parts[1])
    prices.append(price)
prices.sort()
ans = 0
while prices:
    ans += prices.pop()
    if prices:
        prices.pop()
print(ans)
