#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &s, char delimiter) {
  vector<string> tokens;
  string token;
  istringstream tokenStream(s);
  while (getline(tokenStream, token, delimiter)) {
    tokens.push_back(token);
  }
  return tokens;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string line;
  while (1) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    getline(cin, line); // skip '\n'
    map<string, set<string>> menuItemNames;
    for (int i = 0; i < n; i++) {
      getline(cin, line);
      vector<string> rslt = split(line, ' ');
      for (size_t j = 1; j < rslt.size(); j++) {
        menuItemNames[rslt[j]].insert(rslt[0]);
      }
    }
    for (const auto &[item, names] : menuItemNames) {
      cout << item;
      for (const auto &name : names) {
        cout << " " << name;
      }
      cout << "\n";
    }
    cout << "\n";
  }

  return 0;
}
