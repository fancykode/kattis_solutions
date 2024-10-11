import sys

L, R = map(int, sys.stdin.readline().strip().split())
if 2 * L * L > (2 * R) * (2 * R):
    print("nope")
else:
    print("fits")
