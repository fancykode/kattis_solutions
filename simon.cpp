#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int T;
  cin >> T;
  string line;

  getline(cin, line); // skip newline

  for (int t = 0; t < T; t++) {
    getline(cin, line);
    if (line.rfind("simon says ", 0) == 0) {
      cout << line.substr(11) << "\n";
    } else {
      cout << "\n";
    }
  }
  return 0;
}
