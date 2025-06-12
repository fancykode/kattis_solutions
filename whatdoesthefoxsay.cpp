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

  int T;
  string line;
  cin >> T;
  getline(cin, line); // skip '\n'
  for (int t = 0; t < T; t++) {
    vector<string> words;
    unordered_set<string> sounds;
    for (int i = 0;; i++) {
      getline(cin, line);
      if (i == 0) {
        words = split(line, ' ');
      } else {
        if (line == "what does the fox say?") {
          string result;
          string sep = "";
          for (const string &word : words) {
            if (sounds.find(word) == sounds.end()) {
              result += sep + word;
              sep = " ";
            }
          }
          cout << result << "\n";
          break;
        } else {
          vector<string> tokens = split(line, ' ');
          for (size_t j = 2; j < tokens.size(); j++) {
            sounds.insert(tokens[j]);
          }
        }
      }
    }
  }
  return 0;
}
