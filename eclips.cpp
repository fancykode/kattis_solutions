#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string word;
  string sep = "";
  string result = "";
  while (cin >> word) {
    if (word.find('e') != string::npos) {
      result += sep + word;
      sep = " ";
    }
  }
  if (result == "") {
    cout << "oh noes\n";
  } else {
    cout << result << "\n";
  }

  return 0;
}
