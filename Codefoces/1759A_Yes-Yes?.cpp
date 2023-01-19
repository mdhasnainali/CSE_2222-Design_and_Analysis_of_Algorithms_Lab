#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        bool ans = true;
        int n = x.length();
        for (int i = 0;i < n;i++) {
            // cout << x[i] << " ";
            if (x[i] == 'Y' || x[i] == 'e' || x[i] == 's') {
                if (x[i] == 'Y' && i < n - 1 && x[i + 1] != 'e') {
                    ans = false;
                    break;
                }
                else if (x[i] == 'e' && i < n - 1 && x[i + 1] != 's') {
                    ans = false;
                    break;
                }
                else if (x[i] == 's' && i < n - 1 && x[i + 1] != 'Y') {
                    ans = false;
                    break;
                }

            }
            else {
                ans = false;
                break;
            }
        }
        // cout << endl;
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
