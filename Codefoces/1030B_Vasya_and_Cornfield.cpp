#include <bits/stdc++.h>
using namespace std;

long long doubleArea(int a1, int a2, int b1, int b2, int c1, int c2) {
    return abs(((a1 * b2) + (b1 * c2) + (c1 * a2)) - ((a2 * b1) + (b2 * c1) + (c2 * a1)));
}

int main() {
    int d, k;
    cin >> k >> d;
    int n;
    cin >> n;

    for (int i = 0;i < n;i++) {
        int a, b;
        cin >> a >> b;

        long long p = doubleArea(d, 0, 0, d, a, b);
        long long q = doubleArea(k, k - d, k - d, k, a, b);
        long long r = doubleArea(d, 0, k, k - d, a, b);
        long long s = doubleArea(0, d, k - d, k, a, b);

        if (p + q == r + s) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}


