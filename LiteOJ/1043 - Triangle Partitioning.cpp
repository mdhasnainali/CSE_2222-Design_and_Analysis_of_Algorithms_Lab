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
   
    int t,i=0;
    double ab,bc,ac,p,x,y;
    cin>>t;
    while(t--)
    {
        cin>>ab>>bc>>ac>>p;
        i++;
        x=sqrt(p)/sqrt(p+1);
        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<x*ab<<end;
    }
 
 
    return 0;
}
