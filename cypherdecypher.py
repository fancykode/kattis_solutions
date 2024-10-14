import sys

mult_seq = [int(i) for i in list(sys.stdin.readline().strip())]
n = int(sys.stdin.readline().strip())

for _ in range(n):
    msg = sys.stdin.readline().strip()
    encr_letters = []
    for i in range(len(msg)):
        num = ord(msg[i]) - ord("A")
        res = (num * mult_seq[i]) % 26
        let = chr(res + ord("A"))
        encr_letters.append(let)
    print("".join(encr_letters))
