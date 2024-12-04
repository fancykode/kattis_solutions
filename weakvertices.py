from sys import stdin

while True:
    n = int(stdin.readline())
    if n == -1:
        break

    graph = [[0 for i in range(n)] for j in range(n)]

    for i in range(n):
        line = stdin.readline().strip().split(" ")
        for j in range(n):
            graph[i][j] = int(line[j])

    weak_vertices = ""
    for i in range(n):

        neighbors = []
        for j in range(n):
            if graph[i][j] == 1:
                neighbors.append(j)

        is_triangle = False
        for vi in neighbors:
            for vj in neighbors:
                if vi != vj and graph[vi][vj] == 1:
                    is_triangle = True
                    break
            if is_triangle:
                break
        if not is_triangle:
            weak_vertices += " " + str(i)
    print(weak_vertices.strip())
