#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> prices;
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    prices.push_back(p);
  }
  sort(prices.begin(), prices.end());
  cout << prices[prices.size() - 2] << "\n";

  return 0;
}
