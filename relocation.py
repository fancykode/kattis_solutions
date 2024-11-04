import sys

N, Q = map(int, sys.stdin.readline().strip().split())

line_parts = sys.stdin.readline().strip().split()
company_location = {}
for i in range(len(line_parts)):
    company_location[i + 1] = int(line_parts[i])

for i in range(Q):
    parts = sys.stdin.readline().strip().split()
    if parts[0] == "1":
        C, X = int(parts[1]), int(parts[2])
        company_location[C] = X
    elif parts[0] == "2":
        A, B = int(parts[1]), int(parts[2])
        print(abs(company_location[A] - company_location[B]))
