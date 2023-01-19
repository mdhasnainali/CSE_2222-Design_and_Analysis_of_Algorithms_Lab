#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    int n = x.length();
    int s = 0;

    for (int i = 0;i < n;i++) if (x[i] == '4' || x[i] == '7') s++;

    if (s == 4 || s == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
}