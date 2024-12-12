from sys import stdin

stdin.readline()  # skip first line

line = stdin.readline().strip()
nums = []
i = 0
while i < len(line):
    if line[i].isdigit():
        number = ""
        j = i
        while j < len(line) and line[j].isdigit():
            number += line[j]
            j += 1
        i = j
        nums.append(int(number))
    else:
        i += 1
print(max(nums))
