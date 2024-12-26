from sys import stdin

N = stdin.readline().strip()
M = stdin.readline().strip()

zeros_num = len(M) - 1
if len(N) > zeros_num:
    t = len(N) - zeros_num
    print(N[0:t], end="")

    to = len(N)
    found_nonzero = False
    for i in range(len(N) - 1, t - 1, -1):
        if N[i] != "0":
            found_nonzero = True
            break
    if found_nonzero:
        to = i + 1
        print(".", end="")
        print(N[t:to], end="")
    print()
else:
    print("0.", end="")
    t = zeros_num - len(N)
    print(("0" * t), end="")
    to = len(N)
    for i in range(len(N) - 1, -1, -1):
        if N[i] != "0":
            to = i + 1
            break
    print(N[0:to])
