#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int r, c;
  cin >> r >> c;

  char grid[105][105];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      char ch;
      cin >> ch;
      grid[i][j] = ch;
    }
  }
  for (int j = 0; j < c; j++) {
    for (int i = 0; i < r; i++) {
      if (grid[i][j] != '.') {
        cout << grid[i][j];
      }
    }
  }
  cout << "\n";

  return 0;
}
