#include <iostream>

using namespace std;

int main() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  if (n < 3) {
    cout << "NO\n";
  } else if (a == 0 || b == 0 || c == 0) {
    cout << "NO\n";
  } else if (a + b + c >= n) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
