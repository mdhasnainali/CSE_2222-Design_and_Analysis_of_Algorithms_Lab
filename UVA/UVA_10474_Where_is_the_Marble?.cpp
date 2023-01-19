#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q, i = 0;
    int temp;

    while (1) {
        i++;
        cin >> n >> q;
        if (n == 0 && q == 0) break;

        cout << "CASE# " << i << ":" << endl;

        int marbles[n];

        for (int j = 0;j < n;j++) {
            cin >> marbles[j];
        }

        sort(marbles, marbles + n);

        for (int j = 0;j < q;j++) {
            cin >> temp;

            int pos = lower_bound(marbles, marbles + n, temp) - marbles;
            if (pos != n + 1 && marbles[pos] == temp) {
                cout << temp << " found at " << pos + 1 << endl;
            }
            else {
                cout << temp << " not found" << endl;
            }
        }


    }
}