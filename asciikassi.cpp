#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  string s = "+" + string(N, '-') + "+\n";
  cout << s;
  for (int i = 0; i < N; i++) {
    cout << "|" + string(N, ' ') + "|\n";
  }
  cout << s;
  return 0;
}
