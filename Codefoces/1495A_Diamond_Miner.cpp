#include <bits/stdc++.h>
using namespace std;


bool compareDiamonds(pair<long long, long long>a, pair<long long, long long>b)
{
    return ((abs(a.first)) < abs(b.first));
}

bool compareMiners(pair<long long, long long>a, pair<long long, long long>b)
{
    return ((abs(a.second)) < abs(b.second));
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long double x = 0;
        vector <pair<long long, long long>> miners;
        vector <pair<long long, long long>> diamonds;

        cin >> n;
        for (int i = 0;i < 2 * n;i++) {
            long long x, y;

            cin >> x >> y;

            if (x == 0) miners.push_back({ x,y });
            else diamonds.push_back({ x,y });
        }

        sort(miners.begin(), miners.end(), compareMiners);
        sort(diamonds.begin(), diamonds.end(), compareDiamonds);

        for (int i = 0;i < n;i++) {
            x += sqrt(pow((miners[i].first - diamonds[i].first), 2) + pow((miners[i].second - diamonds[i].second), 2));

            // cout << miners[i] << " " << diamonds[i] << endl;
        }

        cout << fixed << setprecision(15) << x << endl;
    }
}

