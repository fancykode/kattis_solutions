input()  # skip first line

answers = input()
adrian_answers = "ABC"
bruno_answers = "BABC"
goran_answers = "CCAABB"

ai, bi, gi = 0, 0, 0
name_correct_answers = {"Adrian": 0, "Bruno": 0, "Goran": 0}

for i in range(len(answers)):
    if answers[i] == adrian_answers[ai]:
        name_correct_answers["Adrian"] += 1
    if answers[i] == bruno_answers[bi]:
        name_correct_answers["Bruno"] += 1
    if answers[i] == goran_answers[gi]:
        name_correct_answers["Goran"] += 1

    ai = (ai + 1) % len(adrian_answers)
    bi = (bi + 1) % len(bruno_answers)
    gi = (gi + 1) % len(goran_answers)

max_answers = 0
for name, answers in name_correct_answers.items():
    max_answers = max(max_answers, answers)

names = []
for name, answers in name_correct_answers.items():
    if answers == max_answers:
        names.append(name)
print(max_answers)
for name in sorted(names):
    print(name)
