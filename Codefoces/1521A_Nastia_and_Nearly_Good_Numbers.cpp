#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, a, b;

    cin >> t;

    while (t--) {
        cin >> a >> b;
        long long p = (a * b) + a;
        long long q = 2 * a * b;
        long long x = q - p;

        if (b == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << p << " " << x << " " << q << endl;
        }
    }
}