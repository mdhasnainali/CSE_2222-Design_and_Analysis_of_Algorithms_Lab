#include <bits/stdc++.h>
using namespace std;

int main() {
    deque <int> initialA, initialB, usingA, usingB;

    int n;
    cin >> n;

    int noInA;
    cin >> noInA;
    for (int i = 0;i < noInA;i++) {
        int a;
        cin >> a;
        initialA.push_back(a);
        usingA.push_back(a);
    }

    int noInB;
    cin >> noInB;
    for (int i = 0;i < noInB;i++) {
        int b;
        cin >> b;
        initialB.push_back(b);
        usingB.push_back(b);
    }

    int c = 0;

    while (!(usingA.empty() || usingB.empty())) {
        c++;
        if (usingA.front() > usingB.front()) {
            int a = usingA.front();
            int b = usingB.front();
            usingA.pop_front();
            usingB.pop_front();

            usingA.push_back(b);
            usingA.push_back(a);
        }
        else {
            int a = usingA.front();
            int b = usingB.front();
            usingA.pop_front();
            usingB.pop_front();

            usingB.push_back(a);
            usingB.push_back(b);
        }
        if (c > 1000) {
            cout << "-1" << endl;
            break;
        }
    }
    if (usingA.empty()) {
        cout << c << ' ' << 2 << endl;
    }
    else if (usingB.empty()) {
        cout << c << ' ' << 1 << endl;
    }
}