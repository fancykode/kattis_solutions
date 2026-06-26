#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int tb = 0, lr = 0;
  for (int i = 0; i < N; i++) {
    char t, b, l, r;
    cin >> t >> b >> l >> r;
    if (t == '0') {
      tb++;
    }
    if (b == '0') {
      tb++;
    }
    if (l == '0') {
      lr++;
    }
    if (r == '0') {
      lr++;
    }
  }
  int swords = min(tb, lr) / 2;
  int remTB = tb - (swords * 2);
  int remLR = lr - (swords * 2);
  cout << swords << " " << remTB << " " << remLR << "\n";
  return 0;
}
