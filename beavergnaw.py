from sys import stdin
import math

while True:
    D, beaver_v = map(int, stdin.readline().strip().split())
    if D == 0 and beaver_v == 0:
        break

    main_cyl_v = math.pi * D * D * D / 4.0
    left_v = main_cyl_v - beaver_v
    cone_h = D / 2.0
    cone_v = (1 / 3.0) * math.pi * cone_h * (D * D / 4.0)
    vv = left_v - 2 * cone_v
    d = (vv / (math.pi / 4.0 - math.pi / 12.0)) ** (1.0 / 3)
    print(d)
