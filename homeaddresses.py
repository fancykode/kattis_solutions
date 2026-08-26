from sys import stdin

l1 = []
l2 = []
for line in stdin:
    line = line.strip()
    parts = line.split()
    if parts[0] == "q":
        break
    l1.append(line)
    l2.append(tuple(parts))
print(l1)
print(l2)
