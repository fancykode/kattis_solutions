from sys import stdin

N = int(stdin.readline().strip())

absent = {}
prev_name = None
i = 0
for _ in range(N):
    line = stdin.readline().strip()
    if line != "Present!":
        absent[line] = i
        i += 1
        prev_name = line
    else:
        del absent[prev_name]
if len(absent) == 0:
    print("No Absences")
else:
    for name in absent:
        print(name)
