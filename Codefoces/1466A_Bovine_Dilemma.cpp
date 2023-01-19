#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        set <int> x;
        int n;
        cin >> n;
        int tree[n];

        for (int i = 0;i < n;i++) {
            cin >> tree[i];
        }

        for (int i = 1;i <= n;i++) {
            for (int j = 0;j < n;j++) {
                if (i + j < n) x.insert(abs(tree[j] - tree[i + j]));
            }
        }
        cout << x.size() << endl;
    }
}
