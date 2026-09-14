from sys import stdin

while True:
    line = stdin.readline().strip()
    if line == "#":
        break
    ones = 0
    for i in range(len(line)):
        if line[i] == "1":
            ones += 1
    ld = line[-1]
    if ld == "e":
        if ones % 2 == 0:
            ld = "0"
        else:
            ld = "1"
    elif ld == "o":
        if ones % 2 == 0:
            ld = "1"
        else:
            ld = "0"
    print(line[:-1] + ld)
