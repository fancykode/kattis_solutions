from sys import stdin

def run(n):
    for _ in range(n):
        h = int(stdin.readline())
        if h < 48:
            print("False")
            return
    print("True")


n = int(stdin.readline())
run(n)
