#include <bits/stdc++.h>
using namespace std;

int main() {
    set <int> numbers;
    int n;
    cin >> n;

    for (int i = 0;i < n;i++) {
        int a;
        cin >> a;
        numbers.insert(a);
    }

    if (numbers.size() == 1) cout << "NO" << endl;
    else {
        set <int> ::iterator it;
        it = numbers.begin();
        it++;
        cout << *it << endl;
    }
}