#include <iostream>

using namespace std;

#define NUM 1000000007

int main() {
  int N;
  cin >> N;

  long long p = 1;
  while (N--) {
    long long a;
    cin >> a;
    p = ((p % NUM) * (a % NUM)) % NUM;
  }
  cout << p << "\n";
  return 0;
}
