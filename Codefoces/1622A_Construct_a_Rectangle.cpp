#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x[3];
        cin >> x[0] >> x[1] >> x[2];

        sort(x, x + 3);

        if (x[0] == x[1]) {
            if (x[2] % 2 == 0)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if (x[1] == x[2]) {
            if (x[0] % 2 == 0)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else {
            if (x[0] + x[1] == x[2])cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
}