from sys import stdin
from itertools import combinations

N = int(stdin.readline())


def calc_min_diff(ingr):
    s = 1
    b = 0
    for ingr in ingr:
        s *= ingr[0]
        b += ingr[1]
    return abs(s - b)


ingr = []
for _ in range(N):
    s, b = map(int, stdin.readline().split())
    ingr.append([s, b])

all_diffs = []
for i in range(1, len(ingr) + 1):
    for comb in combinations(ingr, i):
        all_diffs.append(calc_min_diff(comb))
print(min(all_diffs))
