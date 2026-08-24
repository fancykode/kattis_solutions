from sys import stdin

maxVal = -100000000

for line in stdin:
    maxVal = max(int(line.strip()), maxVal)
print(maxVal)
