input()
words = input().strip().split(" ")

abbr = ""
for word in words:
    if word[0].isupper():
        abbr += word[0]
print(abbr)
