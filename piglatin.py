import sys

vowels = ["a", "e", "i", "o", "u", "y"]

for line in sys.stdin:
    words = line.strip().split()
    result = ""
    sep = ""
    for word in words:
        if word[0] in vowels:
            result += sep + word + "yay"
            sep = " "
        else:
            for i in range(len(word)):
                if word[i] in vowels:
                    break
            result += sep + word[i:] + word[0:i] + "ay"
            sep = " "
    print(result)
