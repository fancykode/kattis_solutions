#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  char k;
  cin >> k;
  string s;
  cin >> s;
  if (s.find(k) != string::npos) {
    cout << "Unnar fann hana!\n";
  } else {
    cout << "Unnar fann hana ekki!\n";
  }
  return 0;
}