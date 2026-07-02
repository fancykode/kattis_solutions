#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, p;
  cin >> n >> p;

  unordered_map<string, string> nounType;
  for (int i = 0; i < n; i++) {
    string noun, type;
    cin >> noun >> type;
    nounType[noun] = type;
  }
  for (int i = 0; i < p; i++) {
    string w, noun;
    bool correct = true;
    cin >> w;
    if (w == "little") {
      cin >> noun;
      correct = nounType[noun] == "m";
    } else if (w == "few") {
      cin >> noun;
      correct = nounType[noun] == "c";
    } else if (w == "much") {
      cin >> noun;
      correct = nounType[noun] == "m";
    } else if (w == "many") {
      cin >> noun;
      correct = nounType[noun] == "c";
    } else if (w == "less") {
      cin >> noun;
      correct = nounType[noun] == "m";
    } else if (w == "fewer") {
      cin >> noun;
      correct = nounType[noun] == "c";
    } else if (w == "more") {
      cin >> noun;
      correct = true;
    } else if (w == "least") {
      cin >> noun;
      correct = nounType[noun] == "m";
    } else if (w == "fewest") {
      cin >> noun;
      correct = nounType[noun] == "c";
    } else if (w == "most") {
      cin >> noun;
      correct = true;
    } else if (w == "amount") {
      cin >> w; // skip "of"
      cin >> noun;
      correct = nounType[noun] == "m";
    } else if (w == "number") {
      cin >> w; // skip "of"
      cin >> noun;
      correct = nounType[noun] == "c";
    }
    if (correct) {
      cout << "Correct!\n";
    } else {
      cout << "Not on my watch!\n";
    }
  }
  return 0;
}
