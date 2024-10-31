from sys import stdin


def cookies(N, A):
    return sum(A)


N = int(stdin.readline())
A = [int(x) for x in stdin.readline().split()]
print(cookies(N, A))
