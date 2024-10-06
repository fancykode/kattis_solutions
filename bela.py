N, B = input().strip().split(" ")
N = int(N)

points = 0
for _ in range(4 * N):
    card = input().strip()
    num = card[0]
    suit = card[1]

    if num == "A":
        points += 11
    elif num == "K":
        points += 4
    elif num == "Q":
        points += 3
    elif num == "J":
        if suit == B:
            points += 20
        else:
            points += 2
    elif num == "T":
        points += 10
    elif num == "9":
        if suit == B:
            points += 14
        else:
            points += 0
print(points)
