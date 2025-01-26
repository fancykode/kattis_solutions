from sys import stdin

n = int(stdin.readline().strip())
seq = [n]

while True:
    num = seq[-1]
    if num == 1:
        break
    if num % 2 == 0:
        seq.append(num // 2)
    else:
        seq.append(3 * num + 1)

print(len(seq))
