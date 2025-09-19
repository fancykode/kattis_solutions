#include <bits/stdc++.h>

using namespace std;

int count(int N) {
  int steps = 0;
  while (N > 1) {
    if ((N & 1) == 0) {
      N /= 2;
    } else {
      N = N * 3 + 1;
    }
    steps++;
  }
  return steps;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  cout << count(N) << "\n";

  return 0;
}
