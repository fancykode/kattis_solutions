line_parts = input().strip().replace("()", " ").split(" ")

if len(line_parts[0]) == len(line_parts[1]):
    print("correct")
else:
    print("fix")
