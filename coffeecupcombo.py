n = int(input())
s = input()

lectures_count = 0
coffee_cups = 0
for i in range(len(s)):
    if coffee_cups != 0 and s[i] == "0":
        lectures_count += 1
        coffee_cups -= 1
    if s[i] == "1":
        lectures_count += 1
        coffee_cups = 2
print(lectures_count)
