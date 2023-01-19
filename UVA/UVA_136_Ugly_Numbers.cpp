#include <bits/stdc++.h>
using namespace std;

int main() {

    set <long long> ans;

    ans.insert(1);

    int n = 1499;

    while (n--) {
        long long x = *ans.begin();
        ans.erase(x);
        ans.insert(x * 2);
        ans.insert(x * 3);
        ans.insert(x * 5);
    }


    cout << "The 1500'th ugly number is " << *ans.begin() << "." << endl;
}