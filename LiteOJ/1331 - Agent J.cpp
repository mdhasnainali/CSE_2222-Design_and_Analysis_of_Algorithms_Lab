//MD. HASNAIN ALI (UNSOLVED)
//I am nobody.

#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3")
#define ll long long
#define lo(i, a, n, x) for (i = a; i <= n; i = i + x)
#define loi(i, a, n, x) for (i = a; i >= n; i = i - x)
#define sca(n) scanf("%lld", &n)
#define pri(n) printf("%lld", n)
#define pb(a) push_back(a)
#define pop() pop_back()
#define mp make_pair
#define ff first
#define ss second
#define sqr(x) (x) * (x)
#define VI vector<int>
#define SZ(a) (int)a.size()
#define SORT(x) sort(x.begin(), x.end())
#define REV(x) reverse(x.begin(), x.end())
#define UNIQUE(v) (v).erase(unique((v).begin(), (v).end()), (v).end())
#define REV(x) reverse(x.begin(), x.end())
#define all(x) x.begin(), x.end()
#define ODD(x) ((x)&1) == 0 ? (0) : (1)
#define TEST_CASE(t) for (int z = 1; z <= t; z++)
#define GCD(a, b) __gcd(a, b)
#define lcm(a, b)        (a) * ((b) / gcd(a, b))
#define end0 "\n"
#define end1 cout << "\n";
#define pi acos(-1)
#define mod 1000000007
#define inf 999999999999999999
#define eps 10e-9



double solve()
{
    double r1,r2,r3,a,b,c,por1,por2,por3,s,area;
    cin>>r1>>r2>>r3;
    a=r1+r2;
    b=r2+r3;
    c=r1+r3;
    por1=acos(((a*a)+(b*b)-(c*c))/(2.0*a*b))*.5*r2*r2;
    por2=acos(((a*a)+(c*c)-(b*b))/(2.0*a*c))*.5*r1*r1;
    por3=acos(((c*c)+(b*b)-(a*a))/(2.0*c*b))*.5*r3*r3;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c))-(por1+por2+por3);
    return area;
}


int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);
    //freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt","w",stdout);

    ll t;
    cin>>t;
    TEST_CASE(t)
    {
        cout<<"Case "<<z<<fixed<<setprecision(6)<<": "<<solve()<<end0;
    }

    return 0;
}
