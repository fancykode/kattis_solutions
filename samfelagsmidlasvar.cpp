#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string &s) {
  vector<string> result;
  stringstream ss(s);
  string word;
  while (ss >> word) {
    result.push_back(word);
  }
  return result;
}

int main() {
  string line;
  getline(cin, line);
  vector<string> words = split(line);
  cout << words[words.size() - 1] << "slop\n";
  return 0;
}
