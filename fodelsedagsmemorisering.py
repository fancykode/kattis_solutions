import sys

N = int(sys.stdin.readline())

birthday_name_priority = {}
for _ in range(N):
    s, c, date = sys.stdin.readline().strip().split()
    c = int(c)
    if date not in birthday_name_priority:
        birthday_name_priority[date] = (s, c)
    else:
        (ss, cc) = birthday_name_priority[date]
        if c > cc:
            birthday_name_priority[date] = (s, c)

names = []
for _, v in birthday_name_priority.items():
    names.append(v[0])
names.sort()

print(len(names))
for name in names:
    print(name)
