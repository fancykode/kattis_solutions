#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  double a1 = M_PI * x * x / 4.0;
  double a2 = (M_PI * y * y / 4.0) * z;
  if (a2 < a1) {
    cout << "Neibb\n";
  } else {
    cout << "Jebb\n";
  }
  return 0;
}
