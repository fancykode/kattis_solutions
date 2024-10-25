moves = input()

ball = 1
for move in moves:
    if move == 'A':
        if ball == 1:
            ball = 2
        elif ball == 2:
            ball = 1
    if move == 'B':
        if ball == 2:
            ball = 3
        elif ball == 3:
            ball = 2
    if move == 'C':
        if ball == 1:
            ball = 3
        elif ball == 3:
            ball = 1
print(ball)