import sys

sys.stdin.readline()  # skip first line
prev_goombas = 0
can_escape = True
for line in sys.stdin:
    g, b = map(int, line.strip().split())
    if prev_goombas + g < b:
        can_escape = False
        break
    prev_goombas += g
print("possible" if can_escape else "impossible")
