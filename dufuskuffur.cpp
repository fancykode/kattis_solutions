#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m;
  cin >> n >> m;
  if (n < m) {
    cout << "Dufur passa\n";
  } else if (n == m) {
    cout << "Dufur passa fullkomlega\n";
  } else {
    cout << "Dufur passa ekki\n";
  }
  return 0;
}
