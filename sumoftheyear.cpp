#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int k = n; k >= 1; k--) {
    unsigned long long s1 = 0;
    for (int t = 1; t <= k; t++) {
      s1 += (unsigned long long)t;
    }
    s1 *= s1;
    unsigned long long s2 = 0;
    for (int t = 1; t <= k; t++) {
      s2 += (unsigned long long)(t * t * t);
    }
    if (s1 == s2) {
      cout << k << "\n";
      break;
    }
  }
  return 0;
}
