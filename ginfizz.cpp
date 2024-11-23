#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;
  cout << 45 * N << " ml gin\n";
  cout << 30 * N << " ml fresh lemon juice\n";
  cout << 10 * N << " ml simple syrup\n";
  if (N == 1) {
    cout << "1 slice of lemon\n";
  } else {
    cout << N << " slices of lemon\n";
  }
  return 0;
}