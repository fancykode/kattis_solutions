n = int(input())

list = []
for i in range(n):
    list.append(int(input()))
list.reverse()
for i in range(n):
    print(list[i])
