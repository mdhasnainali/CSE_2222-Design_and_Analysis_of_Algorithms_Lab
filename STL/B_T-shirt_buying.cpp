#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {

    ll n;
    cin >> n;

    ll prices[n];

    set<ll> one;
    set<ll> two;
    set<ll> three;

    one.clear();
    two.clear();
    three.clear();

    for (int i = 0;i < n;i++) {
        cin >> prices[i];
    }
    for (int i = 0;i < n;i++) {
        ll a;
        cin >> a;
        if (a == 1) one.insert(prices[i]);
        if (a == 2) two.insert(prices[i]);
        if (a == 3) three.insert(prices[i]);
    }

    for (int i = 0;i < n;i++) {
        ll a;
        cin >> a;
        if (a == 1) one.insert(prices[i]);
        if (a == 2) two.insert(prices[i]);
        if (a == 3) three.insert(prices[i]);
    }

    ll m;
    cin >> m;

    for (int i = 0;i < m;i++) {
        ll a;
        cin >> a;

        if (a == 1 && !one.empty()) {
            ll a = *one.begin();
            cout << a << " ";
            set <ll> ::iterator x;
            set <ll> ::iterator y;
            x = two.find(a);
            y = three.find(a);

            one.erase(one.begin());
            if (x != two.end()) two.erase(x);
            if (y != three.end()) three.erase(y);
        }

        else if (a == 2 && !two.empty()) {
            ll a = *two.begin();
            cout << a << " ";
            set <ll> ::iterator x;
            set <ll> ::iterator y;
            x = one.find(a);
            y = three.find(a);

            two.erase(two.begin());
            if (x != one.end()) one.erase(x);
            if (y != three.end()) three.erase(y);
        }

        else if (a == 3 && !three.empty()) {
            ll a = *three.begin();
            cout << a << " ";
            set <ll> ::iterator x;
            set <ll> ::iterator y;
            x = two.find(a);
            y = one.find(a);

            three.erase(three.begin());
            if (x != two.end()) two.erase(x);
            if (y != one.end()) one.erase(y);
        }

        else {
            cout << "-1 ";
        }
    }

    cout << endl;
}