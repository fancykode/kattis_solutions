import sys

word = sys.stdin.readline().strip()

words = []
for i in range(1, len(word)):
    for j in range(i + 1, len(word)):
        w1 = word[0:i]
        w2 = word[i:j]
        w3 = word[j : len(word)]
        words.append(w1[::-1] + w2[::-1] + w3[::-1])
words.sort()
print(words[0])
