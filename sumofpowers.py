k = int(input())
n = int(input())

ans = 0
for _ in range(n):
    x = int(input())
    ans += k**x
print(ans)
