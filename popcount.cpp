#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string line;
  cin >> line;
  int popped = 0;
  for (int i = 0; i < (int)line.size(); i++) {
    if (line[i] == '1') {
      popped++;
    }
  }
  cout << popped << "\n";
  return 0;
}
