import sys

R, C = map(int, sys.stdin.readline().split())
grid = []
words = []
for _ in range(R):
    line = sys.stdin.readline().strip()
    grid.append(list(line))
    line_parts = line.split("#")
    for w in line_parts:
        if len(w) >= 2:
            words.append(w)

for j in range(len(grid[0])):
    word = ""
    for i in range(len(grid)):
        c = grid[i][j]
        if c != "#":
            word += c
        else:
            if len(word) >= 2:
                words.append(word)
            word = ""
    if len(word) >= 2:
        words.append(word)
words.sort()
print(words[0])
