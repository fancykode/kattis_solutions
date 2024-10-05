T = int(input())

for _ in range(T):
    result = 0
    line_parts = input().split(" ")
    for i in range(1, len(line_parts) - 1):
        prev = int(line_parts[i - 1])
        curr = int(line_parts[i])
        if prev * 2 <= curr:
            result += curr - prev * 2
    print(result)
