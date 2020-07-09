#include <bits/stdc++.h>
using namespace std;
 
#define ll     long long
#define pb     push_back
#define mx     32000
 
vector <int> vec;
 
void prime()
{
    bool x[mx]={0};
    ll i,j,p;
    for(i=2;i*i<mx;i++)
    {
        if(x[i]==0){
            p=0;
            for(j=2;i*j<mx;j++)
            {
                if(x[i*j]==0){
                    x[i*j]=1;
                    p++;
                }
            }
        }
        if(p==0) break;
    }
    for(i=2;i<mx;i++){
        if(x[i]==0) vec.pb(i);
    }
}
 
void solve()
{
    ll a,b,i,j,l,n;
    cin>>a>>b;
    l=b-a+1;
    bool y[l]={0};
    for(i=0;((ll)vec[i]*vec[i])<=b;i++)
    {
        ll base=(a/vec[i])*vec[i];
        if(a>base) base+=vec[i];
        for(j=base;j<=b;j+=vec[i]){
            y[j-a]=1;
        }
        if(base==vec[i]) y[base-a]=0;
    }
    if(a==1) y[0]=1;
    for(i=0;i<l;i++) 
    {
        //cout<<y[i]<<endl;
        if(y[i]==0) cout<<i+a<<endl;
    }
}
int main()
{
    ll t;
    prime();
    cin>>t;
    while(t--)
    {
       solve();
    }
}
