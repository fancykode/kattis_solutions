import sys

N = int(sys.stdin.readline())

swedish_words = sys.stdin.readline().strip().split()

M = int(sys.stdin.readline())

vocab = {}
for _ in range(M):
    sw, en = sys.stdin.readline().strip().split()
    vocab[sw] = en

result = ""
for word in swedish_words:
    result += " " + vocab[word]
print(result.strip())
