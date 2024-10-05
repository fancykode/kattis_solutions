import sys

n, r, c = map(int, sys.stdin.readline().strip().split())

rows = []
for _ in range(r):
    rows.append(sys.stdin.readline().strip().split())

names = []
for _ in range(r):
    row = []
    for _ in range(c):
        row.append(sys.stdin.readline().strip())
    names.append(row)

for i in range(len(rows)):
    if rows[i] == names[i]:
        print("left")
    else:
        print("right")
