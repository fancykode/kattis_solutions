#include <iostream>
#include <sstream>
#include <string>

using namespace std;

long long getNum(const string &line) {
  istringstream iss(line);
  string token;
  long long num = 0;
  while (iss >> token) {
    long long digit = stoi(token);
    num = num * 10 + digit;
  }
  return num;
}

string getDigits(long long n) {
  string result;
  string sep;
  do {
    long long d = n % 10;
    result += sep + to_string(d);
    sep = " ";
    n /= 10;
  } while (n);
  reverse(result.begin(), result.end());
  return result;
}

int main() {
  int t;
  cin >> t;
  string line;
  getline(cin, line); // skip newline

  while (t--) {
    getline(cin, line);
    long long num1 = getNum(line);

    getline(cin, line);
    long long num2 = getNum(line);

    long long n = num1 + num2;
    cout << getDigits(n) << "\n";
  }

  return 0;
}
