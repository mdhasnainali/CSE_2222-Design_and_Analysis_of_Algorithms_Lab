#include <bits/stdc++.h>
using namespace std;

int main() {
    set <int> socks;
    socks.clear();

    int n;
    cin >> n;

    int arr[2 * n];
    int maximum = 0;

    for (int i = 0;i < (2 * n) - 1;i++) {
        cin >> arr[i];
        if (socks.count(arr[i]) == 0 || socks.empty()) {
            socks.insert(arr[i]);
        }
        else {
            socks.erase(arr[i]);
        }
        int sz = socks.size();
        maximum = max(maximum, sz);
    }

    cout << maximum << endl;
}