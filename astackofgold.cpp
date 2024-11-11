#include <bits/stdc++.h>
using namespace std;

#define TCW 29260 // tungsten coin weight
#define GCW 29370 // gold coin weight

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int w, s;
  scanf("%d %d", &w, &s);
  int coinsNum = (s * (s + 1)) / 2;
  int tcTotalWeight = TCW * coinsNum; // total tungsten coins weight
  for (int i = 1; i <= s; i++) {
    int tw = tcTotalWeight - TCW * i + GCW * i;
    if (tw == w) {
      cout << i << "\n";
      break;
    }
  }
}