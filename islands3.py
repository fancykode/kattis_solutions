import sys

r, c = map(int, sys.stdin.readline().strip().split())

grid = []
visited = []
for _ in range(r):
    row = list(sys.stdin.readline().strip())
    grid.append(row)
    visited.append([0] * len(row))

islands_num = 0
for i in range(len(grid)):
    for j in range(len(grid[0])):
        if grid[i][j] == "L" and visited[i][j] == 0:
            islands_num += 1
            stack = []
            stack.append((i, j))
            while len(stack) != 0:
                ii, jj = stack.pop()
                visited[ii][jj] = islands_num
                if ii - 1 >= 0 and visited[ii - 1][jj] == 0 and grid[ii - 1][jj] != "W":
                    stack.append((ii - 1, jj))
                if (
                    ii + 1 < len(grid)
                    and visited[ii + 1][jj] == 0
                    and grid[ii + 1][jj] != "W"
                ):
                    stack.append((ii + 1, jj))
                if jj - 1 >= 0 and visited[ii][jj - 1] == 0 and grid[ii][jj - 1] != "W":
                    stack.append((ii, jj - 1))
                if (
                    jj + 1 < len(grid[0])
                    and visited[ii][jj + 1] == 0
                    and grid[ii][jj + 1] != "W"
                ):
                    stack.append((ii, jj + 1))
print(islands_num)
