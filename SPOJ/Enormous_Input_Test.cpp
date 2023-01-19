//MD. HASNAIN ALI (UNSOLVED)
#include <bits/stdc++.h>
 
#define ll long long
#define pii pair<int,int>
 
#define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
#define MAX3(a,b,c) max(a,max(b,c))
#define SQ(x) ((x) * (x))
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define end "\n";
 
using namespace std;
 
 
int main()
{
    FastIO
 
    ll a,b,c,d=0;
    cin>>a>>b;
    while(a--)
    {
        cin>>c;
        if(c%b==0) d++;
    }
    cout<<d<<end;
 
    return 0;
}
