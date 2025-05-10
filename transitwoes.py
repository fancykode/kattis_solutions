s, t, n = map(int, input().split())
d = list(reversed(list(map(int, input().split()))))
b = list(reversed(list(map(int, input().split()))))
c = list(reversed(list(map(int, input().split()))))

can_get_in_time = True
time = s
while True:
    # walk

    time += d.pop()
    if len(d) == 0:
        break
    # wait

    curr_c = c.pop()
    if time <= curr_c:
        time += curr_c - time
    else:
        if time % curr_c != 0:
            can_get_in_time = False
            break
    # bus

    time += b.pop()
if time > t:
    can_get_in_time = False
if can_get_in_time:
    print("yes")
else:
    print("no")
