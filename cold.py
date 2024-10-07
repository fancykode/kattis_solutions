import sys

n = int(sys.stdin.readline())
parts = sys.stdin.readline().strip().split(" ")

temp_num_less_zero = 0
for p in parts:
    t = int(p)
    if t < 0:
        temp_num_less_zero += 1

print(temp_num_less_zero)
