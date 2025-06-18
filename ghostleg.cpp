#include <bits/stdc++.h>

using namespace std;

struct Rung {
  int a1;
  int a2;

  Rung(int a1, int a2) : a1{a1}, a2{a2} {}
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<Rung> rungs;
  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    rungs.push_back(Rung(a, a + 1));
  }

  vector<int> result(n, 0);

  for (int i = 1; i <= n; ++i) {
    int t = i;
    for (int k = 0; k < (int)rungs.size(); ++k) {
      if (rungs[k].a1 == t) {
        t = rungs[k].a2;
      } else if (rungs[k].a2 == t) {
        t = rungs[k].a1;
      }
    }
    result[t - 1] = i;
  }
  for (int i = 0; i < (int)result.size(); ++i) {
    cout << result[i] << '\n';
  }
  return 0;
}