#include <iostream>
#include <iterator>
#include <regex>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cout.tie(nullptr);
  cin.tie(nullptr);
  int N;
  cin >> N;
  string line;
  getline(cin, line);
  getline(cin, line);
  regex pattern = regex(R"(\bhe\b|\bhim\b|\bshe\b|\bher\b)");
  auto iter = sregex_iterator(line.begin(), line.end(), pattern);
  auto count = distance(iter, sregex_iterator());
  cout << count << "\n";
  return 0;
}
