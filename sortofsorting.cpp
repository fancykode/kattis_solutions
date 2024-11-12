#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  while (1) {
    cin >> n;
    if (n == 0) {
      break;
    }
    string name;
    vector<string> names;
    names.reserve(200);
    for (int i = 0; i < n; i++) {
      cin >> name;
      names.push_back(name);
    }
    stable_sort(names.begin(), names.end(),
                [](const string &s1, const string &s2) {
                  int cmp = s1.compare(0, 2, s2, 0, 2);
                  return cmp < 0;
                });
    for (const auto &n : names) {
      cout << n << "\n";
    }
    cout << "\n";
  }
}