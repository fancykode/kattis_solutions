import sys

sys.stdin.readline()

yarn = 0

for line in sys.stdin:
    for ch in line:
        if ch == ".":
            yarn += 20
        elif ch == "O":
            yarn += 10
        elif ch == "\\":
            yarn += 25
        elif ch == "/":
            yarn += 25
        elif ch == "A":
            yarn += 35
        elif ch == "^":
            yarn += 5
        elif ch == "v":
            yarn += 22
print(yarn)
