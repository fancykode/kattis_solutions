#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int a, b;
  cin >> a >> b;
  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < a; i++) {
    int v, c;
    cin >> v >> c;
    sum1 += v * c;
  }
  for (int i = 0; i < b; i++) {
    int v, c;
    cin >> v >> c;
    sum2 += v * c;
  }
  if (sum1 == sum2) {
    cout << "same\n";
  } else {
    cout << "different\n";
  }

  return 0;
}