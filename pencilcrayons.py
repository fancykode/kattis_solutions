import sys

sys.stdin.readline()  # skip first line

remove_count = 0
for line in sys.stdin:
    colors = line.strip().split()
    color_num = {}
    for c in colors:
        color_num[c] = color_num.get(c, 0) + 1
    for c, num in color_num.items():
        if num > 1:
            remove_count += num - 1
print(remove_count)
