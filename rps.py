from sys import stdin

while True:
    p1 = stdin.readline().strip()
    p2 = stdin.readline().strip()
    if p1 == "E" and p2 == "E":
        break
    p1Count = 0
    p2Count = 0
    for i in range(len(p1)):
        s1 = p1[i]
        s2 = p2[i]
        if s1 == "R" and s2 == "S":
            p1Count += 1
        elif s1 == "P" and s2 == "R":
            p1Count += 1
        elif s1 == "S" and s2 == "P":
            p1Count += 1
        elif s1 != s2:
            p2Count += 1
    print(f"p1: {p1Count}\np2: {p2Count}")
