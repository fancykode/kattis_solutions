#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long ans = 1;
  while (n--) {
    long long a, b;
    char op;
    cin >> a >> op >> b;
    if (op == '*') {
      ans = (a * b) * (a * b);
    } else if (op == '+') {
      ans = (a + b) - ans;
    } else if (op == '-') {
      ans *= (a - b);
    } else if (op == '/') {
      if (a % 2 == 0) {
        ans = a / 2LL;
      } else {
        ans = (a + 1LL) / 2LL;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
