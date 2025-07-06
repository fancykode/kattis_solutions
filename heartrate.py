N = int(input())
for _ in range(N):
    b, p = input().strip().split(" ")
    b, p = int(b), float(p)
    bpm = 60 * b / p
    min_abpm = 60 * (b - 1) / p
    max_abpm = 60 * (b + 1) / p
    print(f"{min_abpm:0.4f} {bpm:0.4f} {max_abpm:0.4f}")
