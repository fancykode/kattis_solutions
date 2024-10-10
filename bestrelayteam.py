import sys

N = int(sys.stdin.readline().strip())

runners = []
min_time = 0.0
for _ in range(N):
    lineParts = sys.stdin.readline().strip().split()
    name = lineParts[0]
    a = float(lineParts[1])
    b = float(lineParts[2])
    min_time += a + b
    runners.append((name, a, b))

time_team = {}

best_team = []
for i in range(len(runners)):
    runners_left = []
    total_time = runners[i][1]
    for j in range(len(runners)):
        if i != j:
            runners_left.append(runners[j])

    runners_left.sort(key=lambda x: x[2])

    for j in range(3):
        total_time += runners_left[j][2]

    if total_time < min_time:
        min_time = total_time
        best_team.clear()
        best_team.append(runners[i][0])
        for j in range(3):
            best_team.append(runners_left[j][0])

print(min_time)
for name in best_team:
    print(name)
