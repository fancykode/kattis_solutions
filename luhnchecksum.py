import sys

T = int(sys.stdin.readline().strip())

for _ in range(T):
    num = [int(i) for i in list(sys.stdin.readline().strip()[::-1])]
    result = 0
    for i in range(len(num)):
        if i % 2 == 0:
            result += num[i]
        else:
            tmp = num[i] * 2
            if tmp > 9:
                result += sum([int(d) for d in str(tmp)])
            else:
                result += tmp
    if result % 10 == 0:
        print("PASS")
    else:
        print("FAIL")
