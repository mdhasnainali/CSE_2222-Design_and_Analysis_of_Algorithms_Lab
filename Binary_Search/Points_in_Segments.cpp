#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0;i < t;i++) {
        int n, q;
        cin >> n >> q;
        int points[n];
        vector <pair< int, int >> segments;
        int segmentsNum[q] = { 0 };

        segments.clear();

        for (int j = 0;j < n;j++) {
            cin >> points[j];
        }

        for (int j = 0;j < q;j++) {
            int a, b;
            cin >> a >> b;
            segments.push_back({ a,b });
        }
    }
}