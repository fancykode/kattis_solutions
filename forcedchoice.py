N, P, S = map(int, input().split())

cards = set([i for i in range(1, N + 1)])
steps = []
for _ in range(S):
    cards_chosen = list(map(int, input().split()))[1:]
    steps.append(set(cards_chosen))
for i in range(len(steps)):

    if i == len(steps) - 1:
        if P in (cards - steps[i]):
            print("REMOVE")
        else:
            print("KEEP")
        break
    # try to keep

    keep = True
    tcards = set(steps[i])
    if len(tcards) < len(steps[i + 1]):
        if not tcards.issubset(steps[i + 1]):
            keep = False
    elif len(tcards) > len(steps[i + 1]):
        if not steps[i + 1].issubset(tcards):
            keep = False
    else:
        if steps[i + 1] != tcards:
            keep = False
    if keep:
        print("KEEP")
        cards = tcards
    else:
        print("REMOVE")
        cards = cards - steps[i]
