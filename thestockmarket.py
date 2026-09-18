from sys import stdin

n = int(stdin.readline())
k = int(stdin.readline())

prices = []
for _ in range(n):
    p = int(stdin.readline())
    prices.append(p)

ans = -100000000000000
for i in range(n - k):
    diff = prices[i + k] - prices[i]
    ans = max(ans, diff)
print(ans)
