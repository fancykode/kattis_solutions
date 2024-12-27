parts = input().strip().split(";")

problems_count = 0
for part in parts:
    if "-" in part:
        tparts = part.split("-")
        problems_count += int(tparts[1]) - int(tparts[0]) + 1
    elif part.isnumeric():
        problems_count += 1
print(problems_count)
