#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;
        cout << x;

        for (int i = x.length() - 1;i >= 0;i--) cout << x[i];

        cout << endl;
    }
}