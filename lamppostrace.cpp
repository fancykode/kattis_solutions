#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int d, prevD = 0;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> d;
    ans += abs(d - prevD);
    prevD = d;
  }
  cout << ans << "\n";
  return 0;
}
