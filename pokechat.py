import re

S = input()
id_nums = re.findall("...", input())

result = ""
for id_num in id_nums:
    indx = int(id_num) - 1
    result += S[indx]
print(result)
