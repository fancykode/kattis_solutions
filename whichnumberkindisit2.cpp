#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int N;
    cin >> N;
    int sr = sqrt(N);
    if (sr * sr == N) {
      if (N & 1) {
        cout << "OS\n";
      } else {
        cout << "S\n";
      }
    } else if (N & 1) {
      cout << "O\n";
    } else {
      cout << "EMPTY\n";
    }
  }
}