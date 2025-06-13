from sys import stdin

line = stdin.readline()

line_parts = line.strip().split(" /")
day_month = line_parts[0].split()
day = day_month[0]
month_year = line_parts[1].split()
year = month_year[1]
month = month_year[0]

m = 0
if month == "JAN":
    m = 1
elif month == "FEB":
    m = 2
elif month == "MAR":
    m = 3
elif month == "APR":
    m = 4
elif month == "MAY":
    m = 5
elif month == "JUN":
    m = 6
elif month == "JUL":
    m = 7
elif month == "AUG":
    m = 8
elif month == "SEP":
    m = 9
elif month == "OCT":
    m = 10
elif month == "NOV":
    m = 11
elif month == "DEC":
    m = 12
print(f"20{year}-{m:02d}-{int(day):02d}")
