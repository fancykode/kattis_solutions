#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (m == 0 || (n == 2 && m == 2)) {
    cout << "Jebb\n";
  } else {
    cout << "Neibb\n";
  }
  return 0;
}
