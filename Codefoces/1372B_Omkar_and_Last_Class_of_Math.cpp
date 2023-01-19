#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        if (x % 2 == 0) {
            cout << x / 2 << " " << x / 2 << endl;
        }
        else {
            long long p = x / 2;
            p++;

            bool flag = true;

            for (long long i = 3;i <= sqrt(x) + 1;i++) {
                if (x % i == 0) {
                    flag = false;
                    long long p = max(i, x / i);
                    cout << p << " " << x - p << endl;
                    break;
                }
            }
            if (flag) cout << x - 1 << " " << 1 << endl;
        }
    }
}

