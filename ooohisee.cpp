#include <bits/stdc++.h>
using namespace std;

#define SIZE 60

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  char map[SIZE][SIZE];
  memset(map, '-', sizeof(map));

  int r, c;
  scanf("%d %d", &r, &c);
  getchar();
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      map[i][j] = getchar();
    }
    getchar();
  }
  int treausureCount = 0;
  int ti = -1, tj = -1;
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      if (map[i][j] == '0') {
        if (map[i - 1][j] == 'O' && map[i + 1][j] == 'O' &&
            map[i][j + 1] == 'O' && map[i][j - 1] == 'O' &&
            map[i - 1][j + 1] == 'O' && map[i - 1][j - 1] == 'O' &&
            map[i + 1][j + 1] == 'O' && map[i + 1][j - 1] == 'O') {
          treausureCount++;
          ti = i;
          tj = j;
        }
      }
    }
  }
  if (treausureCount == 0) {
    cout << "Oh no!\n";
  } else if (treausureCount > 1) {
    cout << "Oh no! " << treausureCount << " locations\n";
  } else if (treausureCount == 1) {
    cout << ti << " " << tj << "\n";
  }
}