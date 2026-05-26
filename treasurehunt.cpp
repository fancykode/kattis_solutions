#include <iostream>

#define SIZE 205

using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  getchar();

  char m[SIZE][SIZE];
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      m[i][j] = getchar();
    }
    getchar();
  }
  int i = 0, j = 0;
  int steps = 0;
  while (1) {
    char c = m[i][j];
    if (c == 'E') {
      m[i][j] = '*';
      j++;
    } else if (c == 'W') {
      m[i][j] = '*';
      j--;
    } else if (c == 'S') {
      m[i][j] = '*';
      i++;
    } else if (c == 'N') {
      m[i][j] = '*';
      i--;
    } else if (c == 'T') {
      cout << steps << "\n";
      break;
    } else if (c == '*') {
      cout << "Lost\n";
      break;
    } else if (i < 0 || j < 0 || i >= R || j >= C) {
      cout << "Out\n";
      break;
    }
    steps++;
  }
  return 0;
}
