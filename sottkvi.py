n, k, d = input().strip().split(' ')
n, k, d = int(n), int(k), int(d)

birthday = k + d
friends_to_party = 0
for _ in range(n):
    qd = int(input())
    if qd + 14 <= birthday:
        friends_to_party += 1
print(friends_to_party)