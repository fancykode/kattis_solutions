from sys import stdin

N = int(stdin.readline().strip())
word = stdin.readline().strip()
what = "bottles"

for i in range(N, 0, -1):
    if i == 1:
        what = "bottle"
    print(f"{i} {what} of {word} on the wall, {i} {what} of {word}.")
    if i - 1 == 0:
        print(f"Take it down, pass it around, no more bottles of {word}.")
    else:
        if (i - 1) == 1:
            what = "bottle"
        print(f"Take one down, pass it around, {i - 1} {what} of {word} on the wall.")
    print()
