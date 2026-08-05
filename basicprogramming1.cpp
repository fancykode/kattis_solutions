#include <algorithm>
#include <bitset>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  size_t N, t;
  cin >> N >> t;
  vector<size_t> A;
  A.reserve(N);
  for (size_t i = 0; i < N; i++) {
    size_t v;
    cin >> v;
    A.push_back(v);
  }
  if (t == 1) {
    cout << "7\n";
  } else if (t == 2) {
    if (A[0] > A[1]) {
      cout << "Bigger\n";
    } else if (A[0] == A[1]) {
      cout << "Equal\n";
    } else {
      cout << "Smaller\n";
    }
  } else if (t == 3) {
    vector<size_t> tmp{A[0], A[1], A[2]};
    sort(tmp.begin(), tmp.end());
    cout << tmp[1] << "\n";
  } else if (t == 4) {
    cout << accumulate(A.begin(), A.end(), 0ULL) << "\n";
  } else if (t == 5) {
    size_t sum = 0;
    for (auto n : A) {
      if (n % 2 == 0) {
        sum += n;
      }
    }
    cout << sum << "\n";
  } else if (t == 6) {
    string result;
    for (auto n : A) {
      size_t v = n % 26;
      cout << (char)(v + 'a');
    }
    cout << "\n";
  } else if (t == 7) {
    size_t i = A[0];
    bitset<200'000> visited;
    visited[0] = 1;
    while (1) {
      if (i >= N) {
        cout << "Out\n";
        break;
      }
      if (i == N - 1) {
        cout << "Done\n";
        break;
      }
      if (visited[i] == 1) {
        cout << "Cyclic\n";
        break;
      }
      visited[i] = 1;
      i = A[i];
    }
  }
  return 0;
}
