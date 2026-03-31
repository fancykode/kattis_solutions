#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  if (n == 0) {
    cout << "{}\n";
  } else if (n == 1) {
    cout << "{{}}\n";
  } else {
    string x = "{}";
    for (int i = 1; i < n; i++) {
      x = x + ",{" + x + "}";
    }
    cout << "{" + x + "}\n";
  }
  return 0;
}
