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


#define M 100000000
vector<bool>marked(M+1,true);
vector<int>primes;

void sieve()
{
    int i,j;
    marked[0]=marked[1]=false;
    for(i=2;i*i<=M;i+=1){
        if(marked[i]==true){
            for(j=i*i;j<=M;j+=i) marked[j]=false;
        }
    }
    primes.pb(2);
    for(i=3;i<=M;i+=2)
    {
        if(marked[i]==true) primes.pb(i);
    }
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    //freopen("input-3.txt", "r", stdin);
    //freopen("output-3.txt","w",stdout);

    
    ll t,a,b,c,i,j,p,row,column;
    cin>>t;
    sieve();
    sort(all(primes));
    TEST_CASE(t)
    {
        cin>>a;
        if(marked[a]){
            b=lower_bound(all(primes),a)-primes.begin();
            b++;
            p=ceil((-1.0+sqrt(1+(4*2*b)))/2.0);
            row=p;
            p=row-1;
            column=b-((p*(p+1))/2.0);
            cout<<row<<" "<<column<<end0;
        }
        else{
            cout<<"-1"<<end0;
        }
    }


    return 0;
}
