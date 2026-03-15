#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<char> seq;
  bool valid = true;
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
      seq.push_back(s[i]);
    } else {
      if (seq.empty()) {
        valid = false;
        break;
      }
      char last = seq.back();
      if ((s[i] == ')' && last == '(') || (s[i] == ']' && last == '[') ||
          (s[i] == '}' && last == '{')) {
        seq.pop_back();
      } else {
        valid = false;
        break;
      }
    }
  }
  if (!seq.empty()) {
    valid = false;
  }

  if (valid) {
    cout << "Valid\n";
  } else {
    cout << "Invalid\n";
  }
  return 0;
}
