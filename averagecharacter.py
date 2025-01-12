from sys import stdin

s = stdin.readline()

s = s[0 : len(s) - 1]

sum = 0
for ch in s:
    sum += ord(ch)

avrg = sum // len(s)
print(chr(avrg))
