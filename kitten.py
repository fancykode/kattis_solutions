from sys import stdin

K = int(stdin.readline())

tree = {}
while True:
    lst = list(map(int, stdin.readline().strip().split()))
    if lst[0] == -1:
        break
    for n in lst[1:]:
        tree[n] = lst[0]

path = [str(K)]
node = K
while node in tree:
    path.append(str(tree[node]))
    node = tree[node]
print(" ".join(path))
