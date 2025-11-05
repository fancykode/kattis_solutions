#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  cin >> N;
  int stragglers = 0;
  while (N-- > 0) {
    string type, dir;
    int num;
    cin >> type >> dir >> num;
    if (dir == "IN") {
      stragglers += num;
    } else if (dir == "OUT") {
      stragglers -= num;
    }
  }
  if (stragglers == 0) {
    cout << "NO STRAGGLERS\n";
  } else {
    cout << stragglers << "\n";
  }
  return 0;
}
