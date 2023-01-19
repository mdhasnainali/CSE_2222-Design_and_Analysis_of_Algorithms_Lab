#include <bits/stdc++.h>
using namespace std;


int fun(int x, int a) {
    return (x / a) + (x % a);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r, a;
        cin >> l >> r >> a;

        int n = (r / a);

        int x = (n * a) - 1;

        if (x >= l) {
            int m1 = fun(x, a);
            int m2 = fun(r, a);
            cout << max(m1, m2) << endl;
        }
        else cout << fun(r, a) << endl;

    }
}
