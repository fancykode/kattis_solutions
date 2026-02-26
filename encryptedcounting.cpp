#include <iostream>
#include <string>

using namespace std;

string run(const string &s) {
  string result = "";
  for (size_t i = 0; i < s.size(); i++) {
    int count = 0;
    size_t j = 0;
    for (j = i; j < s.size(); j++) {
      if (s[j] == s[i]) {
        count++;
      } else {
        break;
      }
    }
    result += to_string(count);
    result += s[i];
    i = j - 1;
  }
  return result;
}

int main() {
  string S, C;
  cin >> S >> C;
  int iter = 0;
  while (1) {
    if (S == C) {
      break;
    }
    S = run(S);
    iter++;
  }
  cout << iter << "\n";
  return 0;
}
