#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  getline(cin, s);

  size_t indx = s.find("tree");

  if (indx == string::npos) {
    cout << "no trees here\n";
  } else {
    cout << indx << "\n";
  }
  return 0;
}
