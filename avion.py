import sys

blimps = sys.stdin.read().strip().split("\n")

sep = ""
for i in range(len(blimps)):
    if "FBI" in blimps[i]:
        print(f"{sep}{i + 1}", end="")
        sep = " "
if sep == "":
    print("HE GOT AWAY!")
