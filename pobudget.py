from sys import stdin

N = int(stdin.readline())

budget = 0
for _ in range(N):
    description = stdin.readline().strip()
    K = int(stdin.readline())
    budget += K

if budget == 0:
    print("Lagom")
elif budget < 0:
    print("Nekad")
else:
    print("Usch, vinst")
