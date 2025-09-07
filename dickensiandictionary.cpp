#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  unordered_set<char> left({'q', 'w', 'e', 'r', 't', 'a', 's', 'd', 'f', 'g',
                            'z', 'x', 'c', 'v', 'b'});
  unordered_set<char> right(
      {'y', 'u', 'i', 'o', 'p', 'h', 'j', 'k', 'l', 'n', 'm'});

  string s;
  cin >> s;
  bool rflag = false;
  bool lflag = false;
  bool fl = true;
  for (size_t i = 0; i < s.size(); i++) {
    if (right.count(s[i]) != 0 && !rflag) {
      rflag = true;
      lflag = false;
    } else if (left.count(s[i]) != 0 && !lflag) {
      lflag = true;
      rflag = false;
    } else {
      fl = false;
      break;
    }
  }
  if (fl) {
    cout << "yes\n";
  } else {
    cout << "no\n";
  }
  return 0;
}
