import sys

i = 0
while True:
    n = int(sys.stdin.readline().strip())
    if n == 0:
        break
    animal_count = {}
    i += 1
    for _ in range(n):
        line_parts = sys.stdin.readline().strip().split()
        animal = line_parts[-1].lower()
        if animal in animal_count:
            animal_count[animal] += 1
        else:
            animal_count[animal] = 1
    animals = list(animal_count.keys())
    animals.sort()
    print(f"List {i}:")
    for name in animals:
        print(f"{name} | {animal_count[name]}")
