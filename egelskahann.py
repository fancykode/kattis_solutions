from sys import stdin


def find(c):
    counter = 0
    n = 1
    while True:
        i = 1
        counter += 1
        if counter == c:
            return i
        for j in range(1, n):
            i += 2
            counter += 1
            if counter == c:
                return i
        n *= 2


c = int(stdin.readline())
print(find(c))
