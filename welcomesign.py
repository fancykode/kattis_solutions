import sys

r, c = map(int, sys.stdin.readline().strip().split())

words = []

for _ in range(r):
    words.append(sys.stdin.readline().strip())

maxLen = c
k = 1
for i in range(0, len(words)):
    w = words[i]
    dots_num = maxLen - len(w)
    dots1 = dots_num // 2
    dots2 = dots_num - dots1
    if dots1 != dots2:
        if k % 2 != 0:
            l = min(dots1, dots2)
            r = max(dots1, dots2)
            print(("." * l) + w + ("." * r))
        else:
            l = max(dots1, dots2)
            r = min(dots1, dots2)
            print(("." * l) + w + ("." * r))
        k += 1
    else:
        print(("." * dots1) + w + ("." * dots2))
