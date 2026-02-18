from sys import stdin

N = int(stdin.readline())
num = 2**N
fs = "{:0" + str(N) + "b}"

used = set()
for _ in range(N):
    n = int(stdin.readline().strip(), 2)
    used.add(fs.format(n))


for i in range(0, num):
    bs = fs.format(i)
    if bs not in used:
        print(bs)
        break
