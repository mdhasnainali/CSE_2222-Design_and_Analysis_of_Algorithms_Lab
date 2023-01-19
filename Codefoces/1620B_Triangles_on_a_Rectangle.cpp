#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<pair<long long, long long>> left;
        vector<pair<long long, long long>> right;
        vector<pair<long long, long long>> up;
        vector<pair<long long, long long>> down;

        vector <long long> ans;

        long long a, b;
        cin >> a >> b;

        int nDown;
        cin >> nDown;

        for (long long i = 0;i < nDown;i++) {
            long long temp;
            cin >> temp;
            down.push_back({ temp,0 });
        }

        long long nUp;
        cin >> nUp;

        for (long long i = 0;i < nUp;i++) {
            long long temp;
            cin >> temp;
            up.push_back({ temp, b });
        }

        int nLeft;
        cin >> nLeft;

        for (long long i = 0;i < nLeft;i++) {
            long long temp;
            cin >> temp;
            left.push_back({ 0,temp });
        }

        long long nRight;
        cin >> nRight;

        for (long long i = 0;i < nRight;i++) {
            long long temp;
            cin >> temp;
            right.push_back({ a,temp });
        }


        ans.push_back((down[nDown - 1].first - down[0].first) * b);
        ans.push_back((up[nUp - 1].first - up[0].first) * b);
        ans.push_back((left[nLeft - 1].second - left[0].second) * a);
        ans.push_back((right[nRight - 1].second - right[0].second) * a);

        sort(ans.begin(), ans.end());

        cout << ans[3] << endl;
    }
}
