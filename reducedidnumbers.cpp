#include <bitset>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int G;
  cin >> G;
  vector<uint64_t> students;
  for (int i = 0; i < G; i++) {
    uint64_t sin;
    cin >> sin;
    students.push_back(sin);
  }
  for (uint64_t m = 1;; m++) {
    bitset<999'999> reduced;
    bool found = true;
    for (const auto sin : students) {
      uint64_t newSIN = sin % m;
      if (reduced[newSIN]) {
        found = false;
        break;
      }
      reduced[newSIN] = true;
    }
    if (found) {
      cout << m << "\n";
      break;
    }
  }
  return 0;
}
