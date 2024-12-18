from sys import stdin

t = int(stdin.readline())

for _ in range(t):
    n = int(stdin.readline())
    sf_indx = {}
    package_len = 0
    max_package_len = 0
    package_start = 0
    for i in range(n):
        sf = int(stdin.readline())
        if sf not in sf_indx:
            sf_indx[sf] = i
            package_len += 1
        else:
            if package_start > sf_indx[sf]:
                package_len += 1
            else:
                package_start = sf_indx[sf] + 1
                package_len = i - sf_indx[sf]
            sf_indx[sf] = i
        max_package_len = max(max_package_len, package_len)
    print(max_package_len)
