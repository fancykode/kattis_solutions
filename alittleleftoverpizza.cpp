#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  int S = 0, M = 0, L = 0;
  while (n-- > 0) {
    string s;
    int i;
    cin >> s >> i;
    if (s == "S") {
      S += i;
    } else if (s == "M") {
      M += i;
    } else if (s == "L") {
      L += i;
    }
  }
  cout << ceil(S / 6.0) + ceil(M / 8.0) + ceil(L / 12.0) << "\n";
  return 0;
}
