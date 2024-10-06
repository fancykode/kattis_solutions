line = input().strip()

A, B = 0, 0
wins = None
rule_win_by_2 = False

for i in range(0, len(line) - 1, 2):
    letter = line[i]
    score = int(line[i + 1])

    if letter == "A":
        A += score
    elif letter == "B":
        B += score

    if rule_win_by_2 and abs(A - B) >= 2:
        if A > B:
            wins = "A"
            break
        else:
            wins = "B"
            break

    if A == 10 and B == 10:
        rule_win_by_2 = True

    if not rule_win_by_2:
        if A == 11:
            wins = "A"
            break
        elif B == 11:
            wins = "B"
            break

if wins is None:
    if A > B:
        wins = "A"
    elif B > A:
        wins = "B"
print(wins)
