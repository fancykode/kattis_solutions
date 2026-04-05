#include <iostream>

using namespace std;

int main() {
  string n;
  cin >> n;
  string ans;
  for (size_t i = 0; i < n.size(); i++) {
    if (n[i] == 'B') {
      ans += "(ooo)";
    } else {
      ans += n[i];
    }
  }
  cout << ans << "\n";
  return 0;
}
