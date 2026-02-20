from sys import stdin


def collatz(n, mem):
    steps = 0
    if n in mem:
        return (mem[n], steps, n)
    else:
        mem[n] = steps
    while n != 1:
        if n % 2 == 0:
            n = n // 2
        else:
            n = 3 * n + 1
        steps += 1
        if n in mem:
            return (mem[n], steps, n)
        else:
            mem[n] = steps
    return (-1, -1)


while True:
    A, B = map(int, stdin.readline().split())
    if A == 0 and B == 0:
        break
    mem = {}
    collatz(A, mem)
    ans = collatz(B, mem)
    print(f"{A} needs {ans[0]} steps, {B} needs {ans[1]} steps, they meet at {ans[2]}")
