#include <iostream>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int i = 0;
  int result = 0;
  for (; i < M; i++) {
    int group;
    cin >> group;
    if (N - group >= 0) {
      N -= group;
    } else {
      result++;
    }
  }
  cout << result << "\n";
  return 0;
}
