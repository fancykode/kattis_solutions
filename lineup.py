import sys

N = int(sys.stdin.readline())

names = []

names_incr = []
names_decr = []
for line in sys.stdin:
    name = line.strip()
    names.append(name)
    names_incr.append(name)
    names_decr.append(name)

names_incr.sort()
names_decr.sort(reverse=True)

if names == names_incr:
    print("INCREASING")
elif names == names_decr:
    print("DECREASING")
else:
    print("NEITHER")
