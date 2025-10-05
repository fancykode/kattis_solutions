#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int W, N;
  cin >> W >> N;
  cout << (int)((W * 5280.0) / (double)N) << "\n";

  return 0;
}
