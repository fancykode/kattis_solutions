import sys

n = int(sys.stdin.readline())

# combination (a1, a2, ..) -> number of students that chose this combination
comb_popularity = {}

max_popularity = 0
for _ in range(n):
    comb = tuple(sorted(list(map(int, sys.stdin.readline().strip().split()))))

    if comb in comb_popularity:
        comb_popularity[comb] += 1
    else:
        comb_popularity[comb] = 1
    max_popularity = max(comb_popularity[comb], max_popularity)

students_num = 0
for combination, num in comb_popularity.items():
    if max_popularity == num:
        students_num += num
print(students_num)
