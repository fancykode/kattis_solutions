#include <climits>
#include <cstdint>
#include <iostream>

using namespace std;

int main() {
  int64_t s, v1, v2;
  cin >> s >> v1 >> v2;
  int64_t minSum = INT64_MAX;
  int64_t xx = -1, yy = -1;
  for (int64_t x = 0; x <= 1'000'000; x++) {
    int64_t t = s - x * v1;
    if (t >= 0 && t % v2 == 0) {
      int64_t y = t / v2;
      int64_t tsum = x + y;
      if (tsum < minSum) {
        minSum = tsum;
        xx = x;
        yy = y;
      }
    }
  }

  if (xx == -1) {
    cout << "Impossible\n";
  } else {
    cout << xx << " " << yy << "\n";
  }

  return 0;
}
