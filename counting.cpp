#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int num;
  cin >> num;
  int cn = 0;
  for (int i = 0; i < 12; i++) {
    cn += num;
    cout << cn << "\n";
  }
  return 0;
}
