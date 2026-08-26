import sys

parts = sys.stdin.readline().strip().split()
print(f"{parts[1].upper()[0]}. {parts[0][0:len(parts[0])-1].title()}")
