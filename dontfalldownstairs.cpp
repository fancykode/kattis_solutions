#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N;
  cin >> N;
  vector<int> steps;
  steps.reserve(N);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    steps.push_back(a);
  }
  steps.push_back(0);
  int E = 0;
  for (int i = 0; i < (int)steps.size() - 1; i++) {
    int diff = steps[i] - steps[i + 1] - 1;
    if (diff > 0) {
      E += diff;
    }
  }
  cout << E << "\n";
  return 0;
}
