from sys import stdin

def hor(board, i):
    for j in range(len(board[i])):
        if board[i][j] != "R":
            board[i][j] = "-"


def vert(board, j):
    for i in range(len(board)):
        if board[i][j] != "R":
            board[i][j] = "-"

board = []
for line in stdin:
    board.append(list(line.strip()))
for i in range(len(board)):
    for j in range(len(board[i])):
        if board[i][j] == "R":
            hor(board, i)
            vert(board, j)
ans = 0
for i in range(len(board)):
    for j in range(len(board[i])):
        if board[i][j] == ".":
            ans += 1
print(ans)
