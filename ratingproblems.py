n, k = input().strip().split(" ")
n, k = int(n), int(k)

k_max_jratings = []
k_min_jratings = []
for _ in range(k):
    r = int(input())
    k_min_jratings.append(r)
    k_max_jratings.append(r)

for _ in range(n - k):
    k_max_jratings.append(3)
    k_min_jratings.append(-3)

print(f"{sum(k_min_jratings) / n} {sum(k_max_jratings) / n}")
