from sys import stdin

n = int(stdin.readline().strip())
words = stdin.readline().strip().split()

makes_sense = True
for i in range(len(words)):
    if words[i][0] == "m":
        continue
    else:
        num = int(words[i])
        if num != i + 1:
            makes_sense = False
            break
if makes_sense:
    print("makes sense")
else:
    print("something is fishy")
