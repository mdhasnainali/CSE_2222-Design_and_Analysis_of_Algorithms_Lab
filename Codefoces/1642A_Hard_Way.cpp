#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long ax, ay, bx, by, cx, cy;
        long long ans = 0;
        cin >> ax >> ay >> bx >> by >> cx >> cy;

        if (ay == by && cy < ay) {
            ans = abs(ax - bx);
        }
        else if (cy == by && ay < cy) ans = abs(cx - bx);
        else if (ay == cy && by < ay) ans = abs(ax - cx);

        cout << ans << endl;
    }
}