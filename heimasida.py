from sys import stdin

line = stdin.readline().strip()

special = {
    "Á": "a",
    "á": "a",
    "Ð": "d",
    "ð": "d",
    "É": "e",
    "é": "e",
    "Í": "i",
    "í": "i",
    "Ó": "o",
    "ó": "o",
    "Ú": "u",
    "ú": "u",
    "Ý": "y",
    "ý": "y",
    "Þ": "th",
    "þ": "th",
    "Æ": "ae",
    "æ": "ae",
    "Ö": "o",
    "ö": "o",
}

ans = ""
for ch in line:
    if ch.isdigit() or ch.isalpha():
        ch = special.get(ch, ch)
        ans += ch.lower()
print(ans + ".is")
