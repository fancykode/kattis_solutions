n = input()

while True:
    digit_sum = 0
    for d in n:
        digit_sum += int(d)
    if int(n) % digit_sum == 0:
        print(n)
        break
    n = str(int(n) + 1)
