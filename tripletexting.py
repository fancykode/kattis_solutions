import sys

s = sys.stdin.readline().strip()
one_word_len = len(s) // 3
s1 = s[0:one_word_len]
s2 = s[one_word_len : one_word_len + one_word_len]
s3 = s[one_word_len + one_word_len :]
if s1 == s2:
    print(s1)
elif s1 == s3:
    print(s1)
elif s2 == s3:
    print(s2)
