#include <iostream>

using namespace std;

string getSign(int d, string m) {
  if ((m == "Mar" && d >= 21) || (m == "Apr" && d <= 20)) {
    return "Aries";
  }
  if ((m == "Apr" && d >= 21) || (m == "May" && d <= 20)) {
    return "Taurus";
  }
  if ((m == "May" && d >= 21) || (m == "Jun" && d <= 21)) {
    return "Gemini";
  }
  if ((m == "Jun" && d >= 22) || (m == "Jul" && d <= 22)) {
    return "Cancer";
  }
  if ((m == "Jul" && d >= 23) || (m == "Aug" && d <= 22)) {
    return "Leo";
  }
  if ((m == "Aug" && d >= 23) || (m == "Sep" && d <= 21)) {
    return "Virgo";
  }
  if ((m == "Sep" && d >= 22) || (m == "Oct" && d <= 22)) {
    return "Libra";
  }
  if ((m == "Oct" && d >= 23) || (m == "Nov" && d <= 22)) {
    return "Scorpio";
  }
  if ((m == "Nov" && d >= 23) || (m == "Dec" && d <= 21)) {
    return "Sagittarius";
  }
  if ((m == "Dec" && d >= 22) || (m == "Jan" && d <= 20)) {
    return "Capricorn";
  }
  if ((m == "Jan" && d >= 21) || (m == "Feb" && d <= 19)) {
    return "Aquarius";
  }
  if ((m == "Feb" && d >= 20) || (m == "Mar" && d <= 20)) {
    return "Pisces";
  }
  return "";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int d;
    string m;
    cin >> d >> m;
    cout << getSign(d, m) << "\n";
  }
  return 0;
}
