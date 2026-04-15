#include <iostream>

using namespace std;

bool check(int n) {
  do {
    int d = n % 10;
    if (d == 6) {
      return false;
    }
    n /= 10;
  } while (n != 0);
  return true;
}

int main() {
  int n;
  cin >> n;

  for (int i = n + 1;; i++) {
    if (check(i * i)) {
      cout << i << "\n";
      break;
    }
  }
  return 0;
}
