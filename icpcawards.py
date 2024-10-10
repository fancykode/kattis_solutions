import sys

N = int(sys.stdin.readline().strip())

univ_teams = {}
for i in range(N):
    university_name, team_name = sys.stdin.readline().strip().split()

    if university_name not in univ_teams:
        univ_teams[university_name] = [team_name]
    else:
        univ_teams[university_name].append(team_name)

counter = 0
for univ, teams in univ_teams.items():
    print(f"{univ} {teams[0]}")
    counter += 1
    if counter == 12:
        break
