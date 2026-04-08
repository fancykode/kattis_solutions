#include <iostream>

using namespace std;

bool isSafe(const int n) {
  int a[10] = {0};
  int num = n;
  do {
    int d = num % 10;
    if (d == 0) {
      return false;
    }
    if (a[d]) {
      return false;
    }
    if (n % d != 0) {
      return false;
    }
    a[d] = 1;
    num /= 10;
  } while (num != 0);
  return true;
}

int main() {
  int L, H;
  cin >> L >> H;
  int count = 0;
  for (int i = L; i <= H; i++) {
    if (isSafe(i)) {
      count++;
    }
  }
  cout << count << "\n";
  return 0;
}
