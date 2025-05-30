#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N;
  cin >> N;
  int minX = 100000001, minY = 100000001, maxX = 0, maxY = 0;
  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    minX = min(x, minX);
    maxX = max(x, maxX);
    minY = min(y, minY);
    maxY = max(y, maxY);
  }
  maxX++;
  minX--;
  maxY++;
  minY--;
  int perimeter = (maxX - minX) * 2 + (maxY - minY) * 2;
  cout << perimeter << "\n";

  return 0;
}
