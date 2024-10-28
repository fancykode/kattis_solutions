line = input()
smile_indices = []
for i in range(len(line) - 1):
    if (line[i] == ":" or line[i] == ";") and line[i + 1] == ")":
        smile_indices.append(i)
for i in range(len(line) - 2):
    if (line[i] == ":" or line[i] == ";") and line[i + 1] == "-" and line[i + 2] == ")":
        smile_indices.append(i)

for i in sorted(smile_indices):
    print(i)
