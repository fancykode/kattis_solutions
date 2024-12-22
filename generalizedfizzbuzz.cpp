#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, a, b;
  int fizz = 0, buzz = 0, fizzBuzz = 0;
  cin >> n >> a >> b;

  for (int i = 1; i <= n; i++) {
    if ((i % a == 0) && (i % b == 0)) {
      fizzBuzz++;
    } else if ((i % a) == 0) {
      fizz++;
    } else if ((i % b) == 0) {
      buzz++;
    }
  }
  cout << fizz << " " << buzz << " " << fizzBuzz << "\n";
  return 0;
}