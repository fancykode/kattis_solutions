line1_parts = input().strip().split(" ")
line2_parts = input().strip().split(" ")
line3_parts = input().strip().split(" ")

x1, y1 = int(line1_parts[0]), int(line1_parts[1])
x2, y2 = int(line2_parts[0]), int(line2_parts[1])
x3, y3 = int(line3_parts[0]), int(line3_parts[1])

x4, y4 = None, None

if x1 == x2:
    x4 = x3
elif x1 == x3:
    x4 = x2
else:
    x4 = x1

if y1 == y2:
    y4 = y3
elif y1 == y3:
    y4 = y2
else:
    y4 = y1

print(f"{x4} {y4}")
