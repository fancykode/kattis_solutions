import sys

sys.stdin.readline()  # skip the first line
print("".join([ch for ch in "".join(sys.stdin.readlines()) if ch.isalpha()]))
