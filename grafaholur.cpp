#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, h, x, m, y;
  cin >> n >> h >> x >> m >> y;

  // n workers - xx cub m - 1 h
  double xx = x / (double)h;

  // 1 worker - yy cub m - 1 h
  double yy = xx / n;

  // m workers -- rr cub m - 1 h
  double rr = m * yy;

  // m workers -- y cub m - tt h
  double tt = y / rr;
  cout << tt << "\n";

  return 0;
}
