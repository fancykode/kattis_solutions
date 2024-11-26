#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;

  string s, prevS;
  cin >> prevS;

  int hangovers = 0;
  for (int i = 0; i < N - 1; i++) {
    cin >> s;
    if (prevS[0] == 's' && s[0] == 'd') {
      hangovers++;
    }
    prevS = s;
  }
  cout << hangovers << "\n";
  return 0;
}