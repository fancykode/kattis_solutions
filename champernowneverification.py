a = "123456789101112131415"
n = input()

if n == a[: len(n)]:
    if len(n) <= 9:
        print(n[-1])
    else:
        print(n[-2] + n[-1])
else:
    print(-1)
