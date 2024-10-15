import sys
import math

N = int(sys.stdin.readline().strip())

letters = {}
j = 1
for i in range(65, 91):
    letters[chr(i)] = j
    j += 1
letters[" "] = 27
letters["'"] = 28

dist_between_let = 60 * math.pi / 28.0

for _ in range(N):
    msg = sys.stdin.readline().strip()
    total_time = 1
    for i in range(1, len(msg)):
        n1 = letters[msg[i]]
        n2 = letters[msg[i - 1]]
        dist1 = abs(n1 - n2)
        min_let_pos = min(n1, n2)
        max_let_pos = max(n1, n2)
        dist2 = min_let_pos + abs(letters["'"] - max_let_pos)
        min_dist = min(dist1, dist2)

        total_time += (min_dist * dist_between_let) / 15.0 + 1.0
    print(total_time)
