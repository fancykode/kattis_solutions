#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<char> abc(26, 0);
  for (size_t i = 0; i < abc.size(); i++) {
    abc[i] = (char)('a' + i);
  }

  string line;
  cin >> line;
  bool ok = true;

  for (size_t i = 0; i < line.size(); i++) {
    abc[line[i] - 'a'] = 0;
  }
  for (size_t i = 0; i < 26; i++) {
    if (abc[i] != 0) {
      ok = false;
      cout << abc[i];
    }
  }
  if (ok) {
    cout << "Good job!";
  }
  cout << "\n";

  /*



  int j = 0;
  int i = 0;
  while (1) {
    if (line[i] != (char)('a' + j)) {
      cout << (char)('a' + j);
      ok = false;
    } else {
      if (i < line.size()) {
        i++;
      }
    }
    j++;
  }
  if (ok) {
    cout << "Good job!\n";
  } else {
    cout << "\n";
    }
  */
  return 0;
}
