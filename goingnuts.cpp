#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  int sq = 0;
  while (n) {
    if (n & 1 == 1) {
      sq++;
    }
    n >>= 1;
  }
  cout << sq << "\n";
  return 0;
}
