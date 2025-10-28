#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, m;

  cin >> n >> m;
  int t;
  int lsum = 0;
  int rsum = 0;
  while (n-- > 0) {
    cin >> t;
    lsum += t;
  }
  while (m-- > 0) {
    cin >> t;
    rsum += t;
  }
  if (lsum < rsum) {
    cout << "left\n";
  } else if (rsum < lsum) {
    cout << "right\n";
  } else {
    cout << "either\n";
  }
  return 0;
}
