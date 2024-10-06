name = input()

result = ""
prev_char = " "
for i in range(len(name)):
    if name[i] != prev_char:
        result += name[i]
    prev_char = name[i]
print(result)