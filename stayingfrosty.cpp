#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int w, p;
  cin >> w >> p;
  double t = w / 2.0;
  if (p * 180 >= t) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
