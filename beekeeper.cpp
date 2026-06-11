#include <iostream>

using namespace std;

bool isVowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
  int N;
  while (1) {
    cin >> N;
    if (N == 0) {
      break;
    }
    int maxCount = -1;
    string ans = "";
    while (N--) {
      string w;
      cin >> w;
      int count = 0;
      for (size_t i = 0; i < w.size() - 1; i++) {
        if (w[i] == w[i + 1] && isVowel(w[i])) {
          count++;
        }
      }
      if (count > maxCount) {
        maxCount = count;
        ans = w;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
