K = int(input())

prev_prev_A, prev_prev_B = 0, 1
prev_A, prev_B = 1, 1

if K == 1:
    print(f"{prev_prev_A} {prev_prev_B}")
elif K == 2:
    print(f"{prev_A} {prev_B}")
else:
    A, B = -1, -1
    for _ in range(K - 2):
        A = prev_A + prev_prev_A
        B = prev_B + prev_prev_B
        prev_prev_A = prev_A
        prev_prev_B = prev_B
        prev_A = A
        prev_B = B
    print(f"{A} {B}")
