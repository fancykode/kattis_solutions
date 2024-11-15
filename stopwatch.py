N = int(input())

if N % 2 != 0:
    print("still running")
else:
    t = []
    for _ in range(N):
        t.append(int(input()))

    result = 0
    for i in range(0, len(t) - 1, 2):
        result += t[i + 1] - t[i]
    print(result)
