h, m = input().strip().split(" ")

mm = int(m) - 45
hh = int(h)
if mm < 0:
    mm = 60 + mm
    hh -= 1
    if hh < 0:
        hh = 23
print(f"{hh} {mm}")
