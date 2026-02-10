from sys import stdin
import math

N = 32_001

primes = [True for _ in range(N + 1)]
primes[0] = False
primes[1] = False

for i in range(2, len(primes)):
    if primes[i]:
        for j in range(i * i, len(primes), i):
            primes[j] = False


def calc(n):
    result = []
    for i in range(2, n // 2 + 1):
        diff = n - i
        if primes[i] and diff >= 0:

            if primes[diff]:
                result.append((i, diff))
    return result


n = int(stdin.readline())
for _ in range(n):
    x = int(stdin.readline())
    result = calc(x)
    print(f"{x} has {len(result)} representation(s)")
    for nums in result:
        print(f"{nums[0]}+{nums[1]}")
    print()
