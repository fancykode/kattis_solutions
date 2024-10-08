import sys
import string

N = int(sys.stdin.readline())

for _ in range(N):
    line = sys.stdin.readline().strip().lower()
    abc_lower = set(string.ascii_lowercase)
    for ch in line:
        if ch in abc_lower:
            abc_lower.remove(ch)
    if len(abc_lower) == 0:
        print("pangram")
    else:
        abc_lower_lst = list(string.ascii_lowercase)
        result = ""
        for ch in abc_lower_lst:
            if ch in abc_lower:
                result += ch
        print("missing ", result.strip())
