#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;
        int a = x[0] + x[1] + x[2];
        int b = x[3] + x[4] + x[5];

        if (a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}