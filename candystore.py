N, Q = map(int, input().split())

initials_fullname = {}
for _ in range(N):
    w1, w2 = input().split()
    initial = w1[0] + w2[0]
    if initial in initials_fullname:
        initials_fullname[initial] = "ambiguous"
    else:
        initials_fullname[initial] = w1 + " " + w2

for _ in range(Q):
    initial = input()

    if initial in initials_fullname:
        print(initials_fullname[initial])
    else:
        print("nobody")
