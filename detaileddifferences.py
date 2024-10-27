import sys

n = int(sys.stdin.readline())

for _ in range(n):
    line1 = sys.stdin.readline().strip()
    line2 = sys.stdin.readline().strip()
    result = ""
    for i in range(len(line1)):
        if line1[i] == line2[i]:
            result += "."
        else:
            result += "*"
    print(f"{line1}\n{line2}\n{result}\n")
