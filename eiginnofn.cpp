#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

vector<string> split(string &s) {
  vector<string> result;
  string word;
  stringstream ss(s);
  while (ss >> word) {
    result.push_back(word);
  }
  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string line;
  int n;
  cin >> n;
  getline(cin, line);
  unordered_map<string, string> names;
  while (n--) {
    getline(cin, line);
    vector<string> words = split(line);
    names[words[0]] = line;
  }
  int m;
  cin >> m;
  while (m--) {
    string name;
    cin >> name;
    if (names.contains(name)) {
      if (name == names[name]) {
        cout << "Jebb\n";
      } else {
        cout << "Neibb en " << names[name] << " er heima\n";
      }
    } else {
      cout << "Neibb\n";
    }
  }
  return 0;
}
