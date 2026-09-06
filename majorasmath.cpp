#include <iostream>

using namespace std;

int main() {
  int h, n;
  cin >> h >> n;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  while (n--) {
    string arrow;
    cin >> arrow;
    if (arrow == "standard") {
      h -= a;
    } else if (arrow == "fire") {
      h -= b;
    } else if (arrow == "ice") {
      h -= c;
    } else if (arrow == "light") {
      h -= d;
    }
  }
  if (h <= 0) {
    cout << "dead\n";
  } else {
    cout << h << "\n";
  }
  return 0;
}
