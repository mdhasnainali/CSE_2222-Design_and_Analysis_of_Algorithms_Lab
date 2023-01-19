#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int i = 5;

    while (n / i) {
        ans += (n / i);
        i *= 5;
    }
    cout << ans << endl;
}