#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  unordered_map<string, int> itemsCount;
  for (int i = 0; i < n; i++) {
    string s;
    int c;
    cin >> s >> c;
    itemsCount[s] += c;
  }

  for (auto &[item, count] : itemsCount) {
    int slots = ceil(count / 64.0);
    cout << item << " " << slots << "\n";
  }

  return 0;
}
