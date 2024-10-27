v = int(input())
n = int(input())

for _ in range(n):
    s, k = input().strip().split(" ")
    k = int(k)
    if k >= v:
        print(f"{s} opin")
    else:
        print(f"{s} lokud")
