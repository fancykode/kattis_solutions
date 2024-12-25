import sys

for line in sys.stdin:
    num, den = map(int, line.strip().split())
    if num == 0 and den == 0:
        break
    whole_num = num // den
    print(f"{whole_num} {num - whole_num * den} / {den}")