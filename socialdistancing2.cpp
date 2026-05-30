#include <iostream>
#include <vector>

using namespace std;

int main() {
  size_t S, N;
  cin >> S >> N;
  vector<int> occupied;
  for (size_t i = 0; i < N; i++) {
    int a;
    cin >> a;
    occupied.push_back(a);
  }
  int count = 0;
  for (size_t i = 1; i < N; i++) {
    int emptySeats = (occupied[i] - occupied[i - 1] - 1);
    count += (emptySeats - 1) / 2;
  }
  count += ((occupied[0] - 1) + (S - occupied[occupied.size() - 1]) - 1) / 2;
  cout << count << "\n";
  return 0;
}
