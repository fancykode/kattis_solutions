import sys

n = int(sys.stdin.readline().strip())

correct_answers = []
for _ in range(n):
    correct_answers.append(sys.stdin.readline().strip())

j = 1
score = 0
for i in range(len(correct_answers)):
    if j >= len(correct_answers):
        break
    if correct_answers[i] == correct_answers[j]:
        score += 1
    j += 1
print(score)
