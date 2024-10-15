import sys

seq = list(map(int, sys.stdin.readline().strip().split()))
seq.sort()
n1, n2, n3 = seq[0], seq[1], seq[2]
diff1 = n2 - n1
diff2 = n3 - n2

if diff1 == diff2:
    print(n3 + diff2)
elif diff1 < diff2:
    print(n2 + diff1)
elif diff2 < diff1:
    print(n1 + diff2)
