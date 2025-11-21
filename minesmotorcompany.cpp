#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  string loc = "";
  string prevLoc = "";
  int dist = 0;
  for (int i = 0; i < N; i++) {
    cin >> loc;
    if (i != 0) {
      int dx = abs(loc[0] - prevLoc[0]);
      int dy = abs(loc[1] - prevLoc[1]);
      dist += dx + dy;
    }
    prevLoc = loc;
  }
  cout << dist << "\n";

  return 0;
}
