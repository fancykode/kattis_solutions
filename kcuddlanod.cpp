#include <bits/stdc++.h>

using namespace std;

int unmirror(int n) {
  vector<int> digits;
  int result = 0;
  do {
    int d = n % 10;
    if (d == 2) {
      d = 5;
    } else if (d == 5) {
      d = 2;
    }
    digits.push_back(d);
    n /= 10;
  } while (n != 0);
  for (auto d : digits) {
    result = d + result * 10;
  }
  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N, M;
  cin >> N >> M;

  N = unmirror(N);
  M = unmirror(M);

  if (N > M) {
    cout << "1\n";
  } else {
    cout << "2\n";
  }
  return 0;
}
