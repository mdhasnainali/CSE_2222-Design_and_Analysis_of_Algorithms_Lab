//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;

#pragma GCC             optimize ("Ofast")
#pragma GCC             optimize("O3")
#define ll              long long
#define lo(i,a,n,x)      for(i=a;i<=n;i=i+x)
#define sca(n)          scanf("%lld", &n)
#define pri(n)          printf("%lld", n)
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



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
	//freopen("test.txt","r",stdin);


	ll t,n,l,i,a,b,x,y;
	cin>>t;
	lo(i,1,t,1){
	    cin>>n;
	    l=ceil(sqrt(n));
        a=(l-1)*(l-1);
        b=l*l;
	    if(l&1){
            if(a+l==n){
                x=l;y=l;
            }
            else if(a+l>n){
                x=l;y=n-a;
            }
            else{
                x=b-n+1;y=l;
            }
	    }
	    else{
            if(a+l==n){
                x=l;y=l;
            }
            else if(a+l>n){
                x=n-a;y=l;
            }
            else{
                x=l;y=b-n+1;
            }
	    }
	    cout<<"Case "<<i<<": "<<x<<" "<<y<<end0;
	}


    return 0;
}

