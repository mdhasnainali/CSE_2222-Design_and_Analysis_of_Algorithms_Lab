#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int minV = min(a, b);
    int maxV = max(a, b);

    cout << minV << " " << (maxV - minV) / 2 << endl;
}
