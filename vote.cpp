#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;

    vector<int> votes;
    int maxVotes = 0;
    int winnerID = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      int v;
      cin >> v;
      sum += v;
      if (v > maxVotes) {
        maxVotes = v;
        winnerID = i;
      }
      votes.push_back(v);
    }
    int maxCounter = 0;
    for (size_t i = 0; i < votes.size(); i++) {
      if (votes[i] == maxVotes) {
        maxCounter++;
      }
    }
    bool noWinner = false;
    if (maxCounter > 1) {
      noWinner = true;
    }
    if (noWinner) {
      cout << "no winner\n";
    } else {
      double result = maxVotes * 100.0 / (double)sum;
      if (result > 50.0) {
        cout << "majority winner " << winnerID << "\n";
      } else {
        cout << "minority winner " << winnerID << "\n";
      }
    }
  }
  return 0;
}
