import sys

sys.stdin.readline()
day = -1
min_space_junk = 1_000_000_000
parts = sys.stdin.readline().strip().split()
for i in range(len(parts)):
    val = int(parts[i])
    if val < min_space_junk:
        min_space_junk = val
        day = i
print(day)
