N = int(input())

if N % 2 == 0:
    print(N // 2)
    print(("2 " * (N // 2)).strip())
elif N % 2 != 0 and N > 2:
    N -= 3
    print(1 + N // 2)
    print(("3 " + ("2 " * (N // 2)).strip()).strip())
