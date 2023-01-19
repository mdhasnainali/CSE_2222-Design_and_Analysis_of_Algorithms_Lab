#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        x--;
        long long temp = (sqrt(1 + (8 * x)) - 1) / 2;

        if (((pow(temp, 2) + temp) / 2) + 1 == x + 1) cout << "1 ";
        else cout << "0 ";

    }
    cout << endl;

}