//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;

#pragma GCC optimize ("Ofast")
#pragma GCC optimize("O3")
#define ll long long int
#define end "\n"
#define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
#define FastIO ios_base::sync_with_stdio(0);cin.tie(nullptr);
#define eps 10e-9
#define MX 1000005

int main()
{
    //freopen("test.txt","r",stdin);

    ll s=1;
    int a,i,l,n;
    string x;
    cin>>a>>x;
    l=x.length();
    if(a%l==0) n=l;
    else n=a%l;
    for(i=a;i>=n;i=i-l)
    {
        s=s*i;
    }
    cout<<s<<end;


    return 0;
}











