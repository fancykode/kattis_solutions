#include <bits/stdc++.h>

using namespace std;

void printMirrorImg(const vector<vector<char>> &img) {
  for (int i = (int)img.size() - 1; i >= 0; i--) {
    for (int j = (int)img[i].size() - 1; j >= 0; j--) {
      cout << img[i][j];
    }
    cout << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int T, R, C;
  cin >> T;

  for (int t = 0; t < T; t++) {
    cin >> R >> C;
    vector<vector<char>> img(R, vector<char>(C, ' '));
    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        cin >> img[i][j];
      }
    }
    cout << "Test " << t + 1 << "\n";
    printMirrorImg(img);
  }
  return 0;
}
