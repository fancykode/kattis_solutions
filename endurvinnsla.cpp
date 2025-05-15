#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  string s;
  double p;
  int n;
  cin >> s >> p >> n;

  int plastic = 0, nonplastic = 0;
  getline(cin, s);
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    if (s == "plast") {
      plastic++;
    } else if (s == "ekki plast") {
      nonplastic++;
    }
  }
  double r = (nonplastic * 100.0) / (double)n;
  if (r <= p * 100.0) {
    cout << "Jebb\n";
  } else {
    cout << "Neibb\n";
  }
  return 0;
}
