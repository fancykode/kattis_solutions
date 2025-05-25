#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string original = "UAPC";
  string s;
  cin >> s;
  string missed;
  for (const char c : original) {
    if (s.find(c) == string::npos) {
      missed += c;
    }
  }
  cout << missed << "\n";
  return 0;
}
