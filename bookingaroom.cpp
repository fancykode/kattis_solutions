#include <bits/stdc++.h>

using namespace std;

void fastscan(int &number) {
  bool negative = false;
  int c;
  number = 0;
  c = getchar();
  if (c == '-') {
    negative = true;
    c = getchar();
  }
  for (; (c > 47 && c < 58); c = getchar()) {
    number = number * 10 + c - 48;
  }
  if (negative) {
    number *= -1;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int r, n;
  fastscan(r);
  fastscan(n);
  vector<bool> roomsBooked(r + 1, false);
  for (int i = 0; i < n; i++) {
    int room;
    fastscan(room);
    roomsBooked[room] = true;
  }
  int roomAvailableId = -1;
  for (size_t i = 1; i < roomsBooked.size(); i++) {
    if (!roomsBooked[i]) {
      roomAvailableId = i;
      break;
    }
  }
  if (roomAvailableId == -1) {
    cout << "too late\n";
  } else {
    cout << roomAvailableId << "\n";
  }
  return 0;
}