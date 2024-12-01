#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  vector<int> primes;
  primes.reserve(100);
  for (int i = 2; primes.size() != 100; i++) {
    if (isPrime(i)) {
      primes.push_back(i);
    }
  }
  for (const auto &p : primes) {
    cout << p << endl;
  }
  return 0;
}