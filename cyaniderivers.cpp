#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  string line;
  cin >> line;
  int maxCount = 0;
  for (size_t i = 0; i < line.size(); i++) {
    if (line[i] == '0') {
      int count = 0;
      size_t j = i;
      while (line[j] == '0') {
        count++;
        j++;
      }
      i = j - 1;
      maxCount = max(maxCount, count);
    }
  }
  cout << ceil(maxCount / 2.0) << "\n";
  return 0;
}
