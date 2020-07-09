//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;

#pragma GCC             optimize ("Ofast")
#pragma GCC             optimize("O3")
#define ll              long long
#define lo(i,a,n,x)     for(i=a;i<=n;i=i+x)
#define sca(n)          scanf("%lld", &n)
#define pri(n)          printf("%lld", n)
#define gcd(a,b)        __gcd(a,b)
#define SORT(x)         sort(x.begin(), x.end())
#define REV(x)          reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define distance(a,b)   (sq(a.x-b.x) + sq(a.y-b.y))
#define end0            "\n"
#define end1            cout<<"\n";
#define pi              acos(-1)
#define mod             1000000007
#define inf             999999999999999999
#define eps             10e-9


ll solve()
{
    ll a,b,c,i;
    string x;
    cin>>x>>a;
    b=x.length();
    c=0;
    lo(i,0,b-1,1){
        if(x[i]=='-') x[i]=0;
        else x[i]-=48; 
    }  
    lo(i,0,b-1,1){
        c=(c*10)+x[i];
        if(c>=a) c=c%a;
    }
    return c;
}



int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);
	//freopen("test.txt","r",stdin);

    ll i,j,t;
    cin>>t;
    lo(i,1,t,1){
        j=solve();
        if(j==0) cout<<"Case "<<i<<": divisible"<<end0;
        else cout<<"Case "<<i<<": not divisible"<<end0;

    }

    return 0;
}
