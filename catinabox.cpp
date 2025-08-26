#include <bits/stdc++.h>

using namespace std;

double eps = 1e-9;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int h, w, l, c;
  cin >> h >> w >> l >> c;
  double boxVol = h * w * l;

  if (abs(boxVol - c) <= eps) {
    cout << "COZY\n";
  } else if (c > boxVol) {
    cout << "TOO TIGHT\n";
  } else {
    cout << "SO MUCH SPACE\n";
  }
  return 0;
}
