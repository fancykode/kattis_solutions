from sys import stdin

N = int(stdin.readline())

lst = list(map(int, stdin.readline().split()))

ans = 0
indx = 0
while lst:
    min_val = min(lst)
    indx = lst.index(min_val)
    indx = indx + 1
    ans += indx * min_val
    lst = lst[indx:]

print(ans)
