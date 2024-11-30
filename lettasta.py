from sys import stdin

N = int(stdin.readline())
M = int(stdin.readline())

problems = stdin.readline().strip().split()

problem_score = [0] * len(problems)
for _ in range(M):
    scores = list(map(int, stdin.readline().strip().split()))
    for i in range(len(scores)):
        problem_score[i] += scores[i]

max_indx = -1
max_val = 0
for i in range(len(problem_score)):
    if problem_score[i] > max_val:
        max_val = problem_score[i]
        max_indx = i
print(problems[max_indx])
