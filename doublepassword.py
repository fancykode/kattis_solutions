import sys

p1 = sys.stdin.readline().strip()
p2 = sys.stdin.readline().strip()

count = 0
for i in range(0, 10000):
    num = str(i)
    if len(num) != 4:
        num = ("0" * (4 - (len(num)))) + num
    password_exists = False
    for j in range(len(p1)):
        if num[j] == p1[j] or num[j] == p2[j]:
            password_exists = True
        else:
            password_exists = False
            break
    if password_exists:
        count += 1
print(count)
