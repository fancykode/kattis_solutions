#include <iostream>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int i = 0;
  for (; i < M; i++) {
    int group;
    cin >> group;
    N -= group;
    if (N < 0) {
      break;
    }
  }
  cout << M - i << "\n";
  return 0;
}
