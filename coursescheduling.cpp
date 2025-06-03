#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  unordered_map<string, unordered_set<string>> courseStudents;
  for (int i = 0; i < n; i++) {
    string name, surname, course;
    cin >> name >> surname >> course;
    courseStudents[course].insert(name + " " + surname);
  }
  vector<pair<string, int>> result;
  for (auto& [course, students] : courseStudents) {
    result.push_back(make_pair(course, students.size()));
  }
  sort(result.begin(), result.end(), [](auto& left, auto& right) {
    return left.first < right.first;
  });
  for (size_t i = 0; i < result.size(); i++) {
    cout << result[i].first << " " << result[i].second << "\n";
  }
  return 0;
}
