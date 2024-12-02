from sys import stdin

C = stdin.readline().strip()
K = stdin.readline().strip()

D = [" "] * len(C)
for i in range(len(C)):
    letter = ord(C[i]) - ord("A")
    steps = ord(K[i]) - ord("A")
    if i % 2 == 0:
        D[i] = chr(((letter - steps) % 26) + ord("A"))
    else:
        D[i] = chr(((letter + steps) % 26) + ord("A"))
print("".join(D))
