// This problem can be solved by using multiple ways. I am solving this by using binary search


#include<bits/stdc++.h>
using namespace std;

double findRatio(double ab, double ac, double bc, double ad) {
    double ae = (ad / ab) * ac;
    double de = (ad / ab) * bc;

    double s1 = (ab + ac + bc) / 2.0;
    double s2 = (ad + de + ae) / 2.0;

    double area1 = sqrt(s1 * (s1 - ab) * (s1 - bc) * (s1 - ac));
    double area2 = sqrt(s2 * (s2 - ad) * (s2 - de) * (s2 - ae));
    double area3 = area1 - area2;
    return area2 / area3;
}


double binarySearch(double ab, double ac, double bc, double ratio) {
    double mid = 0, high = ab, low = 0;
    for (int i = 0;i < 100;i++) {
        mid = (low + high) / 2.0;
        if (findRatio(ab, ac, bc, mid) > ratio) {
            high = mid;
        }
        else {
            low = mid;
        }
    }
    return mid;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1;i <= t;i++) {
        double ab, ac, bc, ratio;
        cin >> ab >> ac >> bc >> ratio;
        cout << "Case " << i << ": " << fixed << setprecision(7) << binarySearch(ab, ac, bc, ratio) << endl;
    }


}

// Tutorial: https://www.tushers.com/lightoj-1043-triangle-partitioning/