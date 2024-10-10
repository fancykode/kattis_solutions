import sys

line = sys.stdin.readline().strip()

symbols = 0
upper = 0
lower = 0
white_space = 0
for ch in line:
    if ch == "_":
        white_space += 1
    elif ch.isalpha() and ch.islower():
        lower += 1
    elif ch.isalpha() and ch.isupper():
        upper += 1
    else:
        symbols += 1

print(white_space / len(line))
print(lower / len(line))
print(upper / len(line))
print(symbols / len(line))
