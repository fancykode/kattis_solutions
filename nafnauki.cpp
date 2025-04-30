#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string line;
  cin >> line;
  size_t indx = line.find_last_of('.');
  cout << line.substr(indx) << '\n';

  return 0;
}
