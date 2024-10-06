line_parts = input().strip().split(" ")
kings = int(line_parts[0])
queens = int(line_parts[1])
rooks = int(line_parts[2])
bishops = int(line_parts[3])
knights = int(line_parts[4])
pawns = int(line_parts[5])

print(f"{1-kings} {1-queens} {2-rooks} {2-bishops} {2-knights} {8-pawns}")
