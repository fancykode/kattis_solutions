from sys import stdin

n = int(stdin.readline())

words = stdin.readline().split()

words = [w[::-1] for w in words]
words = sorted(words, reverse=True)

print(" ".join(words))
