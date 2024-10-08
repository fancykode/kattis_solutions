import sys

N = int(sys.stdin.readline())

file = sys.stdin.readline().strip()
after_del = sys.stdin.readline().strip()

result = ""
if N % 2 != 0:
    file_lst = list(file)
    for i in range(len(file_lst)):
        file_lst[i] = "0" if file_lst[i] == "1" else "1"
    result = "".join(file_lst)
else:
    result = file


if result == after_del:
    print("Deletion succeeded")
else:
    print("Deletion failed")
