#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map <string, int> names;

    for (int i = 0;i < n;i++) {
        string name;
        cin >> name;
        if (names.count(name) == 0) {
            names[name] = 1;
            cout << "OK" << endl;
        }
        else {
            int a = names[name];
            cout << name + to_string(a) << endl;
            names[name]++;
        }
    }
}