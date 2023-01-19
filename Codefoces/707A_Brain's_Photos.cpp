#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    bool ans = false;

    cin >> n >> m;

    for (int i = 0;i < n * m;i++) {
        char x;
        cin >> x;
        if (x == 'C' || x == 'M' || x == 'Y' || x == 'K') ans = true;
    }

    if (ans) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
}
