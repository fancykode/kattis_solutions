#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int ch;
  string result;
  while ((ch = getchar()) != '\n') {
    if (ch == '<') {
      result.pop_back();
    } else {
      result += ch;
    }
  }
  cout << result << "\n";
  return 0;
}