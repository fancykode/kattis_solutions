from sys import stdin

words = stdin.readline().split()
words.append(" ")

prev_word = words[0]
count = 1
word_count = []
for i in range(1, len(words)):
    if words[i] == prev_word:
        count += 1
    else:
        word_count.append((prev_word, count))
        count = 1
    prev_word = words[i]

max_occurence = max(wc[1] for wc in word_count)

for wc in word_count:
    if wc[1] == max_occurence:
        print(wc[0])
        break
