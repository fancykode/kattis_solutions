G, T, N = input().strip().split(" ")
G, T, N = int(G), int(T), int(N)

weights = input().strip().split(" ")
items_weight = 0
for w in weights:
    items_weight += int(w)

print(int((G - T) * 0.9) - items_weight)
