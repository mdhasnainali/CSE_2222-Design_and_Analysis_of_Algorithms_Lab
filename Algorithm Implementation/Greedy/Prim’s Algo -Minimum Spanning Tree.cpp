// "Happiness is just a choice and life is beautiful"

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#include<ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll                      long long
#define ull                     unsigned long long
#define MEMSET(a,b)             memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)
#define popb()                  pop_back()
#define mp                      make_pair
#define VI                      vector <int>
#define PII                     pair <int,int>
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define SZ(a)                   (int)a.size()
#define FAST_CIN                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define stlloop(v)              for(auto it:v)
#define UNIQUE(v)               (v).erase(unique((v).begin(),(v).end()),(v).end())
#define POPCOUNT(m)             __builtin_popcountll(m)
#define RIGHTMOST(m)            __builtin_ctzll(m)
#define LEFTMOST(x)             (63-__builtin_clzll((x)))
#define ODD(x)                  (((x)&1)==0?(0):(1))
#define all(a)                  a.begin(),a.end()
#define SORT(x)                 sort(x.begin(), x.end())
#define REV(x)                  reverse(x.begin(), x.end())
#define DBG0                    cerr << __LINE__ << ": ----" << '\n'
#define DBG(...)                cerr << __LINE__ <<':' << "(" << #__VA_ARGS__ << ")"<< " = ", dbg_out(__VA_ARGS__)
#define GCD(a, b)               __gcd(a, b)
#define LCM(a, b)               (a)*((b)/GCD(a,b))
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
void stressTestr()
{
	while (true)
	{
		int n = rand() % 10 + 2;
		cout << n << endl;
		vector<int> numbers;
		for (int i = 0; i < n ; i++)
		{
			numbers.push_back(rand() % 1000000);
		}
		for (int i = 0; i < n ; i++)
		{
			cout << numbers[i] << " ";
		}
		cout << endl;

		long long result1; 
		long long result2;

		if (result1 != result2)
		{
			cout << "Wrong Answer" << result1 << " " << result2 << endl;
			break;
		}
		else
		{
			cout << "OK!" << endl;
		}
	}
}
//----------------------------------------------------------------
const int mx = 100005;
vector <int> graph[mx];
bool visited[mx];
vector <int> res;
int rep[mx];
vector<PII> g[mx];

//----------------------------------------------------------------


int prim(int starts)
{
    priority_queue<PII, vector<PII>,greater<PII>> PQ;
    ll minimumCost = 0;
    int x,y;
    MEMSET(visited,false);

    PQ.push(mp(0,starts));

    while(!PQ.empty()){

        PII p = PQ.top();
        PQ.pop();
        x = p.ss;

        if(visited[x] == true) 
            continue;

        visited[x] = true;

        minimumCost += p.ff;

        for(int i=0;i<g[x].size();++i)
        {
            y = g[x][i].ss;
            if(visited[y] == false)
                PQ.push(g[x][i]);
        }
    }
    return minimumCost;
}

void mainSolve()
{
    int nodes, edges, x, y;
    ll weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        g[x].pb(mp(weight, y));
        g[y].pb(mp(weight, x));
    }
    cin>>x;

    minimumCost = prim(1);
    cout<<minimumCost<<endl;
}
 


int main()
{
    FAST_CIN;
    #ifndef ONLINE_JUDGE
        freopen("input-1.txt","r",stdin);
        // freopen("output-1.txt","w",stdout);

    #endif 
//----------------------------------------------------------------    

    ll t, result;
    cin>>t;
    // t=1;

    for(int i = 1; i<=t ; i++){

        // cout<<"Case "<<i<<": "<<endl;

        mainSolve();

        // cout<<"Case "<<i<<": "<<result<<endl;
    }

    return 0;
}