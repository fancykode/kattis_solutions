#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string w;
  cin >> w;
  int m;
  cin >> m;
  string s;
  getline(cin, s);
  getline(cin, s);

  int wordOccurs = 0;
  for (size_t i = 0; i < s.size(); i++) {
    size_t indx = s.find(w, i);
    if (indx != string::npos) {
      wordOccurs++;
      i = indx;
    } else {
      break;
    }
  }
  cout << wordOccurs << "\n";

  return 0;
}
