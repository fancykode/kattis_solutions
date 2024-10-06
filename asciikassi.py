N = int(input())

upper_lower_row = "+" + ("-" * N) + "+"
print(upper_lower_row)
for _ in range(N):
    line = "|" + (" " * N) + "|"
    print(line)
print(upper_lower_row)
