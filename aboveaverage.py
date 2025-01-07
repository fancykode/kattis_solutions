from sys import stdin

C = int(stdin.readline().strip())

for _ in range(C):
    line_parts = stdin.readline().strip().split()
    N = int(line_parts[0])
    grades = [float(g) for g in line_parts[1:]]
    avrg = sum(grades) / N
    above_avrg_counter = 0
    for g in grades:
        if g > avrg:
            above_avrg_counter += 1
    print(f"{round(above_avrg_counter * 100.0 / N, 3):.3f}%")
