import sys
from fractions import Fraction

N = int(sys.stdin.readline().strip())

circles = list(map(int, sys.stdin.readline().strip().split()))

for i in range(1, len(circles)):
    times = Fraction(circles[0], circles[i])
    print(f"{times.numerator}/{times.denominator}")
