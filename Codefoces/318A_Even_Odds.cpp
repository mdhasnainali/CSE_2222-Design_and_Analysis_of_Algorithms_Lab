#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    if (n % 2 == 0) {
        if (n / 2 >= k) {
            cout << 2 * k - 1 << endl;
        }
        else {
            k -= n / 2;
            cout << 2 * k << endl;
        }
    }
    else {
        if ((n / 2) + 1 >= k) {
            cout << 2 * k - 1 << endl;
        }
        else {
            k -= n / 2;
            k--;
            cout << 2 * k << endl;
        }
    }
}

// 1 2 3 4 5 6 7
// 1 3 5 7 2 4 6

