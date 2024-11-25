#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  int minAge = 1'000'000;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    minAge = min(minAge, a);
  }
  cout << minAge << "\n";

  return 0;
}