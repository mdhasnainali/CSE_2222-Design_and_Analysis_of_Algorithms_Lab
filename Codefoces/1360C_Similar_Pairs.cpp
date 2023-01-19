#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b) {
    if (abs(a - b) == 1) return true;
    else if (a % 2 == b % 2) return  true;
    else return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        bool flag = false;
        cin >> n;
        int odd, even;

        odd = 0;
        even = 0;

        int x[n];

        for (int i = 0;i < n;i++) {
            cin >> x[i];
            if (x[i] % 2 == 0) even++;
            else odd++;
        }

        if (odd % 2 == 0 && even % 2 == 0) {
            flag = true;
        }
        else {
            sort(x, x + n);
            for (int i = 0; i < n - 1; i++) {
                if (x[i + 1] - x[i] == 1 && (even - 1) % 2 == 0) flag = true;
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
