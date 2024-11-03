import sys

sys.stdin.readline()

for line in sys.stdin:
    K, b, n = line.strip().split(" ")
    K, b, n = int(K), int(b), int(n)
    ssd = 0
    while n != 0:
        ssd += (n % b) ** 2
        n = n // b
    print(f"{K} {ssd}")
