AA, BB, CCCC = input().strip().split("/")
AA, BB = int(AA), int(BB)

if AA > 12:
    print("EU")
elif BB > 12:
    print("US")
else:
    print("either")
