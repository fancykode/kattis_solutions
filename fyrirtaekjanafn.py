from sys import stdin

result = []
vowels = set(["a", "e", "i", "o", "u", "y", "A", "E", "I", "O", "U", "Y"])
S = stdin.readline().strip()

for ch in S:
    if ch in vowels:
        result.append(ch)
print("".join(result))
