from sys import stdin

n = int(stdin.readline().strip())
guests = list(map(int, stdin.readline().strip().split()))

lang_seat_id = {}
for i in range(n):
    if guests[i] in lang_seat_id:
        lang_seat_id[guests[i]].append(i)
    else:
        lang_seat_id[guests[i]] = [i]

awk_lvl = n
for lang in lang_seat_id:
    if len(lang_seat_id[lang]) > 1:
        for i in range(1, len(lang_seat_id[lang])):
            diff = lang_seat_id[lang][i] - lang_seat_id[lang][i - 1]
            awk_lvl = min(diff, awk_lvl)
print(awk_lvl)
