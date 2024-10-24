import sys

n = int(sys.stdin.readline())

cpu_count = 0
memory_count = 0
hdd_count = 0
for _ in range(n):
    web_server = sys.stdin.readline().strip().split(" ")
    if web_server[0] == "J":
        cpu_count += 1
    if web_server[1] == "J":
        memory_count += 1
    if web_server[2] == "J":
        hdd_count += 1

print(min(cpu_count, memory_count, hdd_count))
