#include <iostream>

using namespace std;

int main() {
  int M, P, L, E, R, S, N;
  while (cin >> M >> P >> L >> E >> R >> S >> N) {
    for (int i = 0; i < N; i++) {
      int eggs = M * E;
      M = 0;

      int newP = L / R;
      int newM = P / S;

      L = eggs;
      P = newP;
      M = newM;
    }
    cout << M << "\n";
  }
  return 0;
}
