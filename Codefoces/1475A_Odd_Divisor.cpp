#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;

        cin >> x;

        if (x % 2 == 1) cout << "YES" << endl;
        else {
            bool ans = false;
            while (x > 1) {
                if (x % 2 == 1) {
                    ans = true;
                    break;
                }
                x /= 2;
            }
            if (ans) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}


