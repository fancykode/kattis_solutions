#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int H, B, K;
    cin >> H >> B >> K;
    int need = B - H;
    if (need > 0) {
      ans += need * K;
    }
  }
  cout << ans << "\n";
  return 0;
}
