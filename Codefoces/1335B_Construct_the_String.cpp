#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t, a, b, n;

    cin >> t;

    while (t--) {
        cin >> n >> a >> b;
        int d = a / b;
        int ct = 0;
        char ch = 'a';


        for (int i = 1;i <= n;i++) {
            if (ct == b) {
                ct = 0;
                ch = 'a';
            }
            cout << ch;
            ch++;
            ct++;
        }
        cout << endl;
    }
}
