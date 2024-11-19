#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int green, red;
  cin >> green >> red;
  int result = 0;
  if (green == 0) {
    cout << "0\n";
    return 0;
  }
  if (red != 0) {
    int minVal = min(red, green);
    green -= minVal;
    red -= minVal;
    result += minVal * 10;
  }
  int t = green / 3;
  result += t * 10;
  green = green - t * 3;
  t = green / 2;
  result += t * 3;
  green = green - t * 2;
  result += green;
  cout << result << "\n";
  return 0;
}