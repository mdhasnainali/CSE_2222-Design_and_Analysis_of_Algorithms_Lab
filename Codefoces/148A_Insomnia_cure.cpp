// “We do not remember days, we remember moments.”
// ― Jennifer Niven, All the Bright Places

#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#pragma GCC                     optimize ("Ofast")
#pragma GCC                     optimize("O3")
#define db                      double
#define ll                      long long
#define ull                     unsigned long long
#define lo(i,a,n,x)             for(i=a;i<=n;i=i+x)
#define loi(i,a,n,x)            for(i=a;i>=n;i=i-x) 
#define sc                      scanf
#define pr                      printf
#define ms(a,b)                 memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)
#define pop()                   pop_back()
#define mp                      make_pair
#define VI                      vector <int>
#define PII                     pair <int,int>
#define PLL                     pair <long long,long long>
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define SZ(a)                   (int)a.size()
#define FAST_CIN                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define stlloop(v)              for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define UNIQUE(v)               (v).erase(unique((v).begin(),(v).end()),(v).end())
#define POPCOUNT(m)             __builtin_popcountll(m)
#define RIGHTMOST(m)            __builtin_ctzll(m)
#define LEFTMOST(x)             (63-__builtin_clzll((x)))
#define ODD(x)                  (((x)&1)==0?(0):(1))
#define TEST_CASE(t)            for(int love=1;love<=t;love++)
#define PRINT_CASE              printf("Case %d: ",love)
#define LINE_PRINT_CASE         printf("Case %d:\n",z)
#define all(a)                  a.begin(),a.end()
#define SORT(x)                 sort(x.begin(), x.end())
#define REV(x)                  reverse(x.begin(), x.end())
#define DBG0                    cerr << __LINE__ << ": ----" << '\n'
#define DBG(...)                cerr << __LINE__ <<':' << "(" << #__VA_ARGS__ << ")"<< " = ", dbg_out(__VA_ARGS__)
#define GCD(a, b)               __gcd(a, b)
#define lcm(a, b)               (a)*((b)/gcd(a,b))
#define end0                    "\n"
#define end1                    cout<<"\n";
#define Pi                      acos(-1)
#define mod                     1000000007
#define intlim                  2147483648
#define infinity                (1<<28)
#define EPS                     10E-9            

//----------------------------------------------------------------
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
     dbg_out(T...);
}
//----------------------------------------------------------------


void solve()
{
    ll k,l,m,n,d,i,ans;
    cin>>k>>l>>m>>n>>d;
    vector <bool> x(d+1,true);
    for(i=0;i<=d;i+=k) x[i]=false;
    for(i=0;i<=d;i+=l) x[i]=false;
    for(i=0;i<=d;i+=m) x[i]=false;
    for(i=0;i<=d;i+=n) x[i]=false;
    ans=0;
    for(i=1;i<=d;i++){
        if(x[i]==false) 
        {
            ans++;
        }
    }
    cout<<ans<<end0;
}





int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input-2.txt","r",stdin);
        //freopen("output-2.txt","w",stdout);
        auto start=high_resolution_clock::now();
    #endif
//----------------------------------------------------------------    
    
    ll t=1;
    //cin>>t;
    TEST_CASE(t)
    {
        //PRINT_CASE;
        solve();
    }

//----------------------------------------------------------------  
    #ifndef ONLINE_JUDGE 
        auto stop=high_resolution_clock::now();
        auto duration=duration_cast<microseconds>(stop-start);
        cerr<<"\n(Time:"<<duration.count()/1000000.0<<" Seconds)"<<endl;
    #endif
    return 0;
}
