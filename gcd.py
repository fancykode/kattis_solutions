def gcd(a, b):
    a, b = max(a, b), min(a, b)
    while b != 0:
        r = a % b
        a = b
        b = r
    return a


A, B = map(int, input().split())
print(gcd(A, B))
