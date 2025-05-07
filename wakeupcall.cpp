#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N, M;
  cin >> N >> M;

  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < N; i++) {
    int t;
    cin >> t;
    sum1 += t;
  }
  for (int i = 0; i < M; i++) {
    int t;
    cin >> t;
    sum2 += t;
  }
  if (sum1 > sum2) {
    cout << "Button 1\n";
  } else if (sum2 > sum1) {
    cout << "Button 2\n";
  } else {
    cout << "Oh no\n";
  }
  return 0;
}
