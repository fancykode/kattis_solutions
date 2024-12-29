import sys

sys.stdin.readline()

flights = []

for line in sys.stdin:
    row = []
    for num in line.strip().split(" "):
        row.append(int(num))
    flights.append(row)

direct_flights = []
for i in range(len(flights)):
    for j in range(len(flights[0])):
        if flights[i][j] != -1:
            direct_flights.append((i + 1, j + 1, flights[i][j]))
print(len(direct_flights))
direct_flights = sorted(direct_flights)

for flight in direct_flights:
    print(f"{flight[0]} {flight[1]} {flight[2]}")
