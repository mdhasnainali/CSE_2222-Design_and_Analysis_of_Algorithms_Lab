#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int ans = true;

        set<int> r, c;

        for (int i = 0;i < m;i++) {
            int temp1, temp2;
            cin >> temp1 >> temp2;
            r.insert(temp1);
            c.insert(temp2);
        }

        // cout << r.size() << "-" << c.size() << endl;

        if (r.size() == m && c.size() == m && m < n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}