#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int pMax = 0, qMax = 0, rMax = 0, sMax = 0;


        for (int i = 0;i < n;i++) {
            int a, b;
            cin >> a >> b;
            if (a > 0) {
                pMax = max(pMax, a);
            }
            if (b > 0) {
                qMax = max(qMax, b);
            }
            if (a < 0) {
                rMax = min(rMax, a);
            }
            if (b < 0) {
                sMax = min(sMax, b);
            }
        }

        int ans = (pMax + qMax + abs(rMax) + abs(sMax)) * 2;


        cout << ans << endl;
    }
}