import sys

puzzle = []

letter_pos = {}
ch = "A"
for i in range(4):
    for j in range(4):
        letter_pos[ch] = (i, j)
        ch = chr(ord(ch) + 1)

for i in range(4):
    puzzle.append(list(sys.stdin.readline().strip()))

scatter = 0
for i in range(len(puzzle)):
    for j in range(len(puzzle[i])):
        ch = puzzle[i][j]
        if ch != ".":
            scatter += abs(i - letter_pos[ch][0]) + abs(j - letter_pos[ch][1])
print(scatter)
