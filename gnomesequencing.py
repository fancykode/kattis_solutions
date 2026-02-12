from sys import stdin

N = int(stdin.readline())

print("Gnomes:")
for _ in range(N):
    a, b, c = map(int, stdin.readline().split())
    if (a >= b and b >= c) or (a <= b and b <= c):
        print("Ordered")
    else:
        print("Unordered")
