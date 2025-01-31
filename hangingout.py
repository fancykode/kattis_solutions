import sys

L, x = map(int, sys.stdin.readline().strip().split())

groups_denied_count = 0
on_the_terrace = 0
for _ in range(x):
    parts = sys.stdin.readline().strip().split()
    p = int(parts[1])
    if parts[0] == "enter":
        if on_the_terrace + p <= L:
            on_the_terrace += p
        else:
            groups_denied_count += 1
    elif parts[0] == "leave":
        on_the_terrace -= p
print(groups_denied_count)
