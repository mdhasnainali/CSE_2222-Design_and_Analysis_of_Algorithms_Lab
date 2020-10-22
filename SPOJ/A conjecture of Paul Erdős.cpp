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
#define TEST_CASE(t) for (int xyz = 1; xyz <= t; xyz++)
#define distance(a, b) (sq(a.x - b.x) + sq(a.y - b.y))
#define GCD(a, b) __gcd(a, b)
#define lcm(a, b) (a) * ((b) / gcd(a, b))
#define end0 "\n"
#define end1 cout << "\n";
#define pi acos(-1)
#define mod 1000000007
#define inf 999999999999999999
#define eps 10e-9
 
 
#define M 10000010
bool marked[M];
 
 
void sieve()
{
    int i,j;
    marked[0]=true;
    marked[1]=true;
    for(i=2;i*i<M;i+=1){
        if(marked[i]==false){
            for(j=i*i;j<M;j+=i) marked[j]=true;
        }
    }
}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input-3.txt", "r", stdin);
    //freopen("output-3.txt","w",stdout);
 
    ll t,i,j,a,b,c;
    vector <int> x;
    sieve();
    for(i=1;(i*i)<=10000000;i++)
    {
        for(j=1;(j*j*j*j)<=10000000;j++)
        {
            b=(i*i)+(j*j*j*j);
            if(b<M)
            {
                if(!(marked[b]))
                    x.pb(b);
            }
        }
    }
    sort(all(x));
    UNIQUE(x);
    //for(auto xyz:x) cout<<xyz<<end0;
    //cout<<marked[10]<<end0;
    cin>>t;
    TEST_CASE(t)
    {
        cin>>a;
        c=upper_bound(all(x),a)-x.begin();
        cout<<c<<end0;
    }
 
    //cout<<marked[4];
    
 
    return 0;
}
