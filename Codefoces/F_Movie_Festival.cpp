#include <bits/stdc++.h>
using namespace std;

int main() {
    vector < pair<int, int>> movies;
    int n;
    cin >> n;

    for (int i = 0;i < n;i++) {
        int a, b;
        cin >> a >> b;
        movies.push_back({ b,a });
    }

    sort(movies.begin(), movies.end());

    int lastEnd = 0;
    int count = 0;

    for (int i = 0;i < n;i++) {
        if (movies[i].second >= lastEnd) {
            count++;
            lastEnd = movies[i].first;
        }
    }
    cout << count << endl;
}
