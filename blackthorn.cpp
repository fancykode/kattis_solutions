#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;
  string::size_type pos = s.find("kth");
  if (pos == string::npos) {
    cout << "no\n";
  } else {
    cout << "yes\n";
  }

  return 0;
}
