from sys import stdin
import math

N, K = map(int, stdin.readline().strip().split(" "))

print(math.ceil(N / K))
