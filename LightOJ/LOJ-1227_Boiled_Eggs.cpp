//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;

#pragma GCC             optimize ("Ofast")
#pragma GCC             optimize("O3")
#define ll              long long
#define lo(i,a,n,x)     for(i=a;i<=n;i=i+x)
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
    //ios::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);
	//freopen("test.txt","r",stdin);


    ll t,i,j,k,a,b,c,m,p;
    cin>>t;
    lo(i,1,t,1){
        cin>>a>>b>>c;
        int x[a];
        m=0;
        lo(j,0,a-1,1){
            cin>>x[j];
        }
        p=0;
        for(j=0,k=1;k<=b && j<a;j++,k++)
        {
            if(x[j]+m<=c) {
                m=m+x[j];
                p++;
            }
            else break;
        }
        cout<<"Case "<<i<<": "<<p<<end0;

    } 

    return 0;
}

