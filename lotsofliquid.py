import math
from sys import stdin

n = int(stdin.readline())
containers = [float(c) ** 3 for c in stdin.readline().split()]
print(math.cbrt(sum(containers)))
