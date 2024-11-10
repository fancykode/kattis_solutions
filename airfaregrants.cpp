#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N;
  cin >> N;
  vector<int> rLimits;
  vector<int> flights;
  for (int i = 0; i < N; i++) {
    int P;
    cin >> P;
    flights.push_back(P);
    rLimits.push_back(P / 2);
  }
  int result = 10'000'000;
  for (int rl : rLimits) {
    for (int fp : flights) {
      result = min(fp - min(rl, fp), result);
    }
  }
  cout << result << "\n";
}
