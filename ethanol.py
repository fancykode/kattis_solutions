from sys import stdin

c = int(stdin.readline())

line1 = "  " + ("H " * c) + "  "
line2 = "  " + ("| " * c) + "  "
line3 = "H-" + ("C-" * c) + "OH"
line4 = line2
line5 = line1
print(line1)
print(line2)
print(line3)
print(line4)
print(line5)
