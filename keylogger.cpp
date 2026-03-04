#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N;
  cin >> N;
  bool caps = false;
  bool shift = false;
  unordered_map<string, string> m = {
      {"clank", "a"},       {"bong", "b"},     {"click", "c"},
      {"tap", "d"},         {"poing", "e"},    {"clonk", "f"},
      {"clack", "g"},       {"ping", "h"},     {"tip", "i"},
      {"cloing", "j"},      {"tic", "k"},      {"cling", "l"},
      {"bing", "m"},        {"pong", "n"},     {"clang", "o"},
      {"pang", "p"},        {"clong", "q"},    {"tac", "r"},
      {"boing", "s"},       {"boink", "t"},    {"cloink", "u"},
      {"rattle", "v"},      {"clock", "w"},    {"toc", "x"},
      {"clink", "y"},       {"tuc", "z"},      {"whack", "spacebar"},
      {"bump", "capslock"}, {"pop", "delete"}, {"dink", "hold down"},
      {"thumb", "release"},
  };
  vector<char> ans;
  while (N-- > 0) {
    string sound;
    cin >> sound;
    string rslt = m[sound];
    char ch;
    if (rslt == "capslock") {
      caps = caps == false ? true : false;
    } else if (rslt == "delete") {
      if (!ans.empty()) {
        ans.pop_back();
      }
    } else if (rslt == "hold down") {
      shift = true;
    } else if (rslt == "release") {
      shift = false;
    } else {
      if (rslt == "spacebar") {
        ch = ' ';
      } else {
        ch = rslt[0];
      }
      if (caps) {
        if (shift) {
          ch = tolower(ch);
        } else {
          ch = toupper(ch);
        }
      } else {
        if (shift) {
          ch = toupper(ch);
        }
      }
      ans.push_back(ch);
    }
  }
  for (size_t i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }
  cout << "\n";

  return 0;
}
