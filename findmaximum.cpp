#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a >= b) {
    if (c >= a) {
      cout << c << "\n";
    } else {
      cout << a << "\n";
    }
  } else {
    if (c >= b) {
      cout << c << "\n";
    } else {
      cout << b << "\n";
    }
  }
  return 0;
}
