from sys import stdin

n, d = map(int, stdin.readline().split())
money = [int(v) for v in stdin.readline().split()]

collected = 0
i = 0
while True:
    if money[i % len(money)] == -1:
        break
    collected += money[i % len(money)]
    money[i % len(money)] = -1
    i += d
print(collected)
