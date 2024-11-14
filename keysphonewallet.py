N = int(input())

forgot = set(["keys", "phone", "wallet"])

for _ in range(N):
    item = input()
    if item in forgot:
        forgot.remove(item)

if len(forgot) == 0:
    print("ready")
else:
    for item in sorted(list(forgot)):
        print(item)
