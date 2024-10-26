S = input()

result = ""
prev_ch = ""
for i in range(len(S)):
    if S[i] != prev_ch:
        result += S[i]
    prev_ch = S[i]
print(result)
