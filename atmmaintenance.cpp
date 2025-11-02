#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N, K;
  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (K - a >= 0) {
      K -= a;
      cout << "1";
    } else {
      cout << "0";
    }
  }
  cout << "\n";
  return 0;
}
