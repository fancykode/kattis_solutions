from sys import stdin

M, N = map(int, stdin.readline().split())

U, L, R, D = map(int, stdin.readline().split())

words = []
tmp = " " * (N + L + R)

for _ in range(U):
    words.append(tmp)

for _ in range(M):
    left = " " * L
    right = " " * R
    words.append(left + stdin.readline().strip() + right)

for _ in range(D):
    words.append(tmp)

ch = "#"
for i in range(len(words)):
    if i % 2 == 0:
        ch = "#"
    else:
        ch = "."
    for j in range(len(words[0])):
        if words[i][j] == " ":
            print(ch, end="")
        else:
            print(words[i][j], end="")
        ch = "." if ch == "#" else "#"
    print()
