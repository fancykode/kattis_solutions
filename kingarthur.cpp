#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  double d, w;
  int n;
  cin >> d >> w >> n;
  if ((d * 3.1415926) > (w * n)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
