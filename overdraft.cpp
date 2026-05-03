#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int balance = 0;
  int ans = 0;
  while (n--) {
    int t;
    cin >> t;
    balance += t;
    if (balance < 0) {
      ans = max(ans, -balance);
    }
  }
  cout << ans << "\n";
  return 0;
}
