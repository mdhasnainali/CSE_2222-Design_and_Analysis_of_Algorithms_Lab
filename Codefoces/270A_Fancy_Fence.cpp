#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int i = 3;

        while ((i - 2) * 180 < n * i) i++;

        // cout << i << endl;

        if ((i - 2) * 180 == n * i) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}

