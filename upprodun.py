import math

N = int(input())
M = int(input())

rows = N if M % N == 0 else M % N
cols = math.ceil(M / N)

for _ in range(rows):
    for _ in range(cols):
        print("*", end="")
    print()

if M % N != 0:
    left = M - cols * (M % N)
    lrows = N - rows
    lcols = left // lrows

    for _ in range(lrows):
        for _ in range(lcols):
            print("*", end="")
        print()
