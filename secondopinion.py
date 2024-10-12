import sys

s = int(sys.stdin.readline().strip())

h = s // 3600
m = (s % 3600) // 60
s = s - (h * 3600 + m * 60)
print(f"{h} : {m} : {s}")
