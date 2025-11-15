#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k;
  cin >> n >> k;

  unordered_set<int> unq;
  while (n-- > 0) {
    int d;
    cin >> d;
    unq.insert(d);
  }
  int result = unq.size() <= k ? unq.size() : k;
  cout << result << "\n";

  return 0;
}
