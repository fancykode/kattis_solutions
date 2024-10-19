import sys

X_str = sys.stdin.readline().strip()
X = int(X_str)

digits = [int(d) for d in list(X_str)]
digits.sort()

found = False
for i in range(X + 1, 1000000):
    tdigits = [int(d) for d in list(str(i))]
    tdigits.sort()
    if digits == tdigits:
        found = True
        break

if found:
    print(i)
else:
    print(0)
