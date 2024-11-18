G, S, C = input().split(" ")
G, S, C = int(G), int(S), int(C)

bp = 0
bp += 3 * G
bp += 2 * S
bp += 1 * C

vc = ""
if bp >= 8:
    vc = "Province"
elif bp >= 5:
    vc = "Duchy"
elif bp >= 2:
    vc = "Estate"

tc = ""
if bp >= 6:
    tc = "Gold"
elif bp >= 3:
    tc = "Silver"
else:
    tc = "Copper"

if vc == "":
    print(tc)
else:
    print(f"{vc} or {tc}")
