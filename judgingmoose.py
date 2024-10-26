l, r = map(int, input().split())
if l == 0 and r == 0:
    print("Not a moose")
elif r == l:
    print(f"Even {r + l}")
else:
    print(f"Odd {max(r, l)*2}")
