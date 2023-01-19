#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string st;
    cin >> t;

    while (t--) {
        cin >> st;
        cout << (st[0] - '0') + (st[2] - '0') << endl;
    }
}