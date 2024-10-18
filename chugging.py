import sys

N = int(sys.stdin.readline().strip())

ta, da = map(int, sys.stdin.readline().strip().split())
tb, db = map(int, sys.stdin.readline().strip().split())
Alice, Bob = 0, 0
mult = 0

for i in range(N):
    Alice += ta + da * mult
    Bob += tb + db * mult
    mult += 1
if Alice < Bob:
    print("Alice")
elif Bob < Alice:
    print("Bob")
else:
    print("=")
