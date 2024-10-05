#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    int mines = 0;
    vector<pair<int, int>> result;

    scanf("%d %d", &n, &m);
    getchar();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch = getchar();
            if (ch == '*') {
                ++mines;
                result.push_back(make_pair(i + 1, j + 1));
            }
        }
        getchar();
    }
    printf("%d\n", mines);
    for (const auto& pair : result) {
        printf("%d %d\n", pair.first, pair.second);
    }
    return 0;
}