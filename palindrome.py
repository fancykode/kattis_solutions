s = input()

i = 0
j = len(s) - 1
isPalindrome = True
while i < j:
    if s[i] != s[j]:
        isPalindrome = False
    i += 1
    j -= 1

if isPalindrome:
    print("Palindrome!")
else:
    print("Nothing special about this string :(")
