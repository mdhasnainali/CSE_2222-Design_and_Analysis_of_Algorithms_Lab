//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC             optimize ("Ofast")
#pragma GCC             optimize("O3")
#define ll              long long
#define lo(i,a,b,c)     for(i=a;i<=b;i=i+c)
#define sca(n)          scanf("%lld", &n)
#define pri(n)          printf("%lld", n)
#define SORT(x)         sort(x.begin(), x.end())
#define REV(x)          reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define distance(a,b)   (sq(a.x-b.x) + sq(a.y-b.y))
#define end0             "\n"
#define end1            cout<<"\n";
#define pi              acos(-1)
#define mod             1000000007
#define inf             999999999999999999
#define eps             10e-9      
 
 
 
 
 
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);
  //freopen("test.txt","r",stdin);
  
  ll t,i,j,a,b;
  cin>>t;
  lo(i,1,t,1)
  {
    b=0;
    cin>>a;
    lo(j,1,64,1)
    {
      if(a&1) b++ ;
      a=a>>1;
    }
    if(b%2==0) cout<<"Case "<<i<<": even"<<end0;
    else cout<<"Case "<<i<<": odd"<<end0;
    
  }


    return 0;
}
