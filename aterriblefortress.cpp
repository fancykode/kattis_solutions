#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, T = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    T += b;
  }
  cout << T << "\n";

  return 0;
}
