#include <bits/stdc++.h>

#define EPS 1e-7

using namespace std;

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  double r = x * 0.25 + y * 0.25 + z * 0.5;

  if (abs(r - 90.0) < EPS || abs(r - 100.0) < EPS || (r > 90.0 && r < 100.0)) {
    cout << "A\n";
  } else if (abs(r - 80.0) < EPS || (r > 80.0 && r < 90.0)) {
    cout << "B\n";
  } else if (abs(r - 70.0) < EPS || (r > 70.0 && r < 80.0)) {
    cout << "C\n";
  } else if (abs(r - 60.0) < EPS || (r > 60.0 && r < 70.0)) {
    cout << "D\n";
  } else {
    cout << "F\n";
  }
  return 0;
}
