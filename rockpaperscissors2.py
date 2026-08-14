p1 = input()
p2 = input()

if p1 == "scissors" and p2 == "paper":
    print("Player 1")
elif p1 == "rock" and p2 == "scissors":
    print("Player 1")
elif p1 == "paper" and p2 == "rock":
    print("Player 1")
elif p1 == p2:
    print("Draw")
else:
    print("Player 2")
