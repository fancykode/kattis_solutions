from sys import stdin

N = int(stdin.readline())

for i in range(N):
    word = stdin.readline().strip()
    if i % 2 == 0:
        print(word)
