#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N, M;
  cin >> N >> M;
  if (N < M) {
    int diff = M - N;
    if (diff == 1) {
      cout << "Dr. Chaz will have " << diff << " piece of chicken left over!\n";
    } else {
      cout << "Dr. Chaz will have " << diff
           << " pieces of chicken left over!\n";
    }

  } else if (N > M) {
    int diff = N - M;
    if (diff == 1) {
      cout << "Dr. Chaz needs " << diff << " more piece of chicken!\n";
    } else {
      cout << "Dr. Chaz needs " << diff << " more pieces of chicken!\n";
    }
  }
  return 0;
}
