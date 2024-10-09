import sys

n = int(sys.stdin.readline().strip())

log = set()
for _ in range(n):
    lineParts = sys.stdin.readline().strip().split()
    if lineParts[0] == "entry":
        if lineParts[1] not in log:
            log.add(lineParts[1])
            print(f"{lineParts[1]} entered")
        else:
            print(f"{lineParts[1]} entered (ANOMALY)")
    elif lineParts[0] == "exit":
        if lineParts[1] not in log:
            print(f"{lineParts[1]} exited (ANOMALY)")
        else:
            print(f"{lineParts[1]} exited")
            log.remove(lineParts[1])
