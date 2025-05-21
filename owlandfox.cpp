#include <bits/stdc++.h>

using namespace std;

int digitsSum(int n) {
  int sum = 0;
  while (n != 0) {
    sum += (n % 10);
    n /= 10;
  }
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int T, N;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> N;
    int ds = digitsSum(N);
    for (int j = N - 1; j >= 0; j--) {
      int t = digitsSum(j);
      if (ds - t == 1) {
        cout << j << "\n";
        break;
      }
    }
  }
  return 0;
}
