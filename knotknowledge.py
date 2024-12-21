n = int(input())

to_learn = input().strip().split(" ")
has_learned = input().strip().split(" ")

to_learn = set(to_learn)
has_learned = set(has_learned)

print(to_learn.difference(has_learned).pop())
