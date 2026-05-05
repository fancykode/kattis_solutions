#include <iostream>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  bool minFound = false;
  bool maxFound = false;

  n--;
  while (n--) {
    int w;
    cin >> w;
    if (w == a) {
      minFound = true;
    } else if (w == b) {
      maxFound = true;
    }
  }
  if (minFound && maxFound) {
    for (int i = a; i <= b; i++) {
      cout << i << "\n";
    }
  } else if (minFound && !maxFound) {
    cout << b << "\n";
  } else if (maxFound && !minFound) {
    cout << a << "\n";
  } else {
    cout << "-1\n";
  }

  return 0;
}
