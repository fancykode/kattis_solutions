from sys import stdin

N = int(stdin.readline().strip())
E = int(stdin.readline().strip())

villager_songs = {}
for i in range(N + 1):
    villager_songs[i] = set()

song_counter = 0
for _ in range(E):
    line_parts = stdin.readline().strip().split()
    K = int(line_parts[0])
    new_song = False
    villagers_present = []
    for i in range(1, len(line_parts)):
        v = int(line_parts[i])
        villagers_present.append(v)
        if v == 1:
            new_song = True
            song_counter += 1
    if new_song:
        for v in villagers_present:
            villager_songs[v].add(song_counter)
    else:
        all_songs = set()
        for v in villagers_present:
            all_songs = all_songs.union(villager_songs[v])
        for v in villagers_present:
            villager_songs[v] = villager_songs[v].union(all_songs)

for v in range(N + 1):
    if villager_songs[v] == villager_songs[1]:
        print(v)
