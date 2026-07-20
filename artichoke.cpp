#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  int p, a, b, c, d, n;
  cin >> p >> a >> b >> c >> d >> n;
  double v = p * (sin(a * 1 + b) + cos(c * 1 + d) + 2);
  double minVal = v;
  double maxVal = v;
  double maxDiff = 0;
  for (int k = 1; k <= n; k++) {
    double v = p * (sin(a * k + b) + cos(c * k + d) + 2);
    if (v > maxVal) {
      maxVal = v;
      minVal = v;
    }
    if (v < minVal) {
      minVal = v;
    }
    double diff = maxVal - minVal;
    if (diff > maxDiff) {
      maxDiff = diff;
    }
  }
  printf("%.7f\n", maxDiff);
  return 0;
}
