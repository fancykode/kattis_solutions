import sys

R, C, Zr, Zc = map(int, sys.stdin.readline().strip().split())

m = [[" " for _ in range(C * Zc)] for _ in range(R * Zr)]

i = 0
for line in sys.stdin:
    j = 0
    line = line.strip()
    for k in range(len(line)):
        m[i][j] = line[k]
        for ii in range(Zr):
            for jj in range(Zc):
                m[i + ii][j + jj] = line[k]
        j += Zc
    i += Zr

for i in range(len(m)):
    for j in range(len(m[i])):
        print(m[i][j], end="")
    print()
