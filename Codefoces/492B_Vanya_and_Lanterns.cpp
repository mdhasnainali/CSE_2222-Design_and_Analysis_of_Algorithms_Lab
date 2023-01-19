#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, l;
    cin >> n >> l;

    long long x[n];

    for (int i = 0;i < n;i++) {
        cin >> x[i];
    }

    sort(x, x + n);

    long double ans = max(x[0] - 0, l - x[n - 1]);

    for (int i = 0;i < n - 1;i++) {
        ans = max(ans, (x[i + 1] - x[i]) / (long double)2.0);
    }

    cout << fixed << setprecision(10) << (double)ans << endl;
}



