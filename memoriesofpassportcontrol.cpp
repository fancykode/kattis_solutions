#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int k, s;
  cin >> k >> s;
  int t = s / k;
  int result = s - (t * k);
  result += t;
  cout << result << "\n";

  return 0;
}
