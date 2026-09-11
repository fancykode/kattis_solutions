#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double r0;
  cin >> r0;

  double ans = 1 + r0 + r0 * r0 + r0 * r0 * r0;
  cout << round(ans) << "\n";
  return 0;
}
