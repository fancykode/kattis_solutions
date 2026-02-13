from sys import stdin

n = int(stdin.readline())

lines = []
for _ in range(n):
    seq = stdin.readline().strip()
    lines.append(seq)

type1count = 0
type2count = 0
type3count = 0
type4count = 0
invalid = False

i = 0
while i < len(lines):

    if lines[i][0] == "0":
        type1count += 1
        i += 1
    elif i + 1 < len(lines) and lines[i][0:3] == "110" and lines[i + 1][0:2] == "10":
        type2count += 1
        i += 2
    elif (
        i + 2 < len(lines)
        and lines[i][0:4] == "1110"
        and lines[i + 1][0:2] == "10"
        and lines[i + 2][0:2] == "10"
    ):
        type3count += 1
        i += 3
    elif (
        i + 3 < len(lines)
        and lines[i][0:5] == "11110"
        and lines[i + 1][0:2] == "10"
        and lines[i + 2][0:2] == "10"
        and lines[i + 3][0:2] == "10"
    ):
        type4count += 1
        i += 4
    else:
        invalid = True
        break

if invalid:
    print("invalid")
else:
    print(type1count)
    print(type2count)
    print(type3count)
    print(type4count)
