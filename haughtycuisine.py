from sys import stdin

n = int(stdin.readline().strip())

result = []
for _ in range(n):
    line_parts = stdin.readline().strip().split()
    result = line_parts[1:]
    break

for d in result:
    print(d)
