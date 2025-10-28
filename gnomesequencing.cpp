#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  cout << "Gnomes:\n";
  while (N-- > 0) {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a >= b && b >= c) || (a <= b && b <= c)) {
      cout << "Ordered\n";
    } else {
      cout << "Unordered\n";
    }
  }
  return 0;
}
