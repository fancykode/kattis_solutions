from sys import stdin

line = stdin.readline().strip()

# try IPv4

parts = line.split(".")
if len(parts) == 4:
    print(f"{parts[3]}.{parts[2]}.{parts[1]}.{parts[0]}.in-addr.arpa.")
else:  # IPv6
    line = line[::-1]
    parts = [x for x in line.split(":") if x]
    t = len(parts)
    if t < 8:
        left = 8 - t
        indx = line.index("::")
        line = line[:indx] + (":0:" * left) + line[indx + 2 :]
        parts = [x for x in line.split(":") if x]
    result = ""
    for part in parts:
        l = len(part)
        part = part + "0" * (4 - l)
        result += ".".join(list(part)) + "."
    print(result + "ip6.arpa.")
