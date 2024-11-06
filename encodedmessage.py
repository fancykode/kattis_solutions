import sys
import re
import math

sys.stdin.readline()

for line in sys.stdin:
    line = line.strip()
    square_len = math.sqrt(len(line))
    parts = re.findall("." * int(square_len), line)

    msg = ""
    for i in range(len(parts[0]) - 1, -1, -1):
        for part in parts:
            msg += part[i]
    print(msg)
