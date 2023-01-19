//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;

#pragma GCC               optimize ("Ofast")
#pragma GCC               optimize("O3")
#define ll                long long
#define lo(i,a,n,x)       for(i=a;i<=n;i=i+x)
#define loi(i,a,n,x)      for(i=a;i>=n;i=i-x) 
#define sca(n)            scanf("%lld", &n)
#define pri(n)            printf("%lld", n)
#define pb(a)             push_back(a)
#define pop()             pop_back()
#define mp                make_pair
#define ff                first
#define ss                second
#define sqr(x)            (x)*(x)
#define VI                vector <int>
#define SZ(a)             (int)a.size()
#define SORT(x)           sort(x.begin(), x.end())
#define REV(x)            reverse(x.begin(), x.end())
#define UNIQUE(v)         (v).erase(unique((v).begin(),(v).end()),(v).end())
#define all(x)            x.begin(), x.end()
#define ODD(x)            ((x)&1)==0?(0):(1)
#define TEST_CASE(t)      for(int z=1;z<=t;z++)
#define distance(a,b)     (sq(a.x-b.x) + sq(a.y-b.y))
#define gcd(a, b)         __gcd(a, b)
#define lcm(a, b)         (a)*((b)/gcd(a,b))
#define end0              "\n"
#define end1              cout<<"\n";
#define pi                acos(-1)
#define mod               1000000007
#define inf               999999999999999999
#define eps               10e-9



void Binary_search(int x,ll n,int girl[]){
    ll i,high,low,mid,ans=1;
    high=n-1;
    low=0;
    mid=0;
    
    while(high-low>=0){
        mid=(high+low)/2;
        if(girl[mid]==x) break;
        else if(girl[mid]>x) high=mid-1;
        else low=mid+1;
    }
    for(i=mid;i>=0;i--){
        if(girl[i]<x){
            cout<<girl[i]<<" ";
            ans=0;
            break;
        }
    }
    if(ans) cout<<"X ";

    for(ans=-1,i=mid;i<n;i++){
        if(girl[i]>x){
            cout<<girl[i]<<end0;
            ans=0;
            break;
        }
    }
    if(ans) cout<<"X"<<end0;

    return ;
}



int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);
    //freopen("test.txt","r",stdin);
    
    
        
    ll n,i,m;
    cin>>n;
    int girl[n];
    lo(i,0,n-1,1){
        cin>>girl[i];
    }
    cin>>m;
    int boy[m];
    lo(i,0,m-1,1){
        cin>>boy[i];
    }
    

    lo(i,0,m-1,1){
            Binary_search(boy[i],n,girl);
    }
    
    return 0; 
}