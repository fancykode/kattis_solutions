#include <cstdint>
#include <iostream>
#include <unordered_set>
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
    unordered_set<uint64_t> newIDs;
    bool found = true;
    for (const auto sin : students) {
      uint64_t newSIN = sin % m;
      if (newIDs.contains(newSIN)) {
        found = false;
        break;
      }
      newIDs.insert(newSIN);
    }
    if (found) {
      cout << m << "\n";
      break;
    }
  }
  return 0;
}
