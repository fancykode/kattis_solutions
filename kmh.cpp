#include <iostream>
#include <string>

using namespace std;

int main() {
  int N;
  string sign;
  cin >> N;
  int maxVal = 0;
  while (N-- > 0) {
    cin >> sign;
    if (sign != "/") {
      int limit = stoi(sign);
      cout << limit << "\n";
      maxVal = max(maxVal, limit);
    } else {
      cout << (maxVal / 10 + 1) * 10 << "\n";
    }
  }
  return 0;
}
