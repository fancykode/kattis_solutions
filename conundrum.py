cipher = input()

days = 0
for i in range(0, len(cipher) - 2, 3):
    l1 = cipher[i]
    l2 = cipher[i + 1]
    l3 = cipher[i + 2]
    if l1 != "P":
        days += 1
    if l2 != "E":
        days += 1
    if l3 != "R":
        days += 1
print(days)
