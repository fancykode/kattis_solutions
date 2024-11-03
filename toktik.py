import sys

n = int(sys.stdin.readline())

most_popular_tok_tikker = ""
max_popularity = 0
tik_tokers_views = {}
for _ in range(n):
    s, a = sys.stdin.readline().strip().split()
    a = int(a)
    tik_tokers_views[s] = tik_tokers_views.get(s, 0) + a
    if tik_tokers_views[s] >= max_popularity:
        max_popularity = tik_tokers_views[s]
        most_popular_tok_tikker = s
print(most_popular_tok_tikker)
