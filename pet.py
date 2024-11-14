win_num, win_points = None, 0

for i in range(5):
    line_parts = input().strip().split(" ")
    s = sum(
        [int(line_parts[0]), int(line_parts[1]), int(line_parts[2]), int(line_parts[3])]
    )
    if s > win_points:
        win_points = s
        win_num = i + 1

print(f"{win_num} {win_points}")
