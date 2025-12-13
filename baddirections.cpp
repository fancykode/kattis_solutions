#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t-- > 0) {
    int k;
    string n;
    cin >> k >> n;
    for (size_t i = 0; i < n.size(); i++) {
      int d = n[i] - '0';
      n[i] = ((d + k) % 10) + '0';
    }
    cout << n << "\n";
  }
  return 0;
}
