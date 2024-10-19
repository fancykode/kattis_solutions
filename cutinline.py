import sys

N = int(sys.stdin.readline().strip())

queue = []
for _ in range(N):
    queue.append(sys.stdin.readline().strip())

C = int(sys.stdin.readline().strip())
for _ in range(C):
    event_parts = sys.stdin.readline().strip().split()
    if event_parts[0] == "cut":
        indx = queue.index(event_parts[2])
        queue.insert(indx, event_parts[1])
    elif event_parts[0] == "leave":
        queue.remove(event_parts[1])

for name in queue:
    print(name)
