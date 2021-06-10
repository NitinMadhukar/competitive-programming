/* Nitin Madhukar */
#include<bits/stdc++.h>

#define ll              long long
#define mp              make_pair
#define pb              push_back
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vvi             vector<vi>
#define pi              pair<int,int>
#define ppl             pair<ll,ll>

#define PI              3.14159265
#define M               (int)1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

using namespace std;

vector<ll>special;
vector<ll>dt;
vector<ll> adj[200005];

void dfs(ll u,ll p)
{
	if(p!= -1)
	{
		dt[u]=dt[p]+1;
	}
	for(auto i:adj[u])
	{
		if(i!=p)
		{
			dfs(i,u);
		}
	}
}
ppl maxx(ppl a, ppl b){
	if(a.first>b.first){
		return a;
	}
	return b;
}

void solve() {
		vector<ll> te(1000);
		ll n,k,A;
		cin>>n>>k>>A;
		for(ll i=0;i<1000;i++)te[i]=i;
		for(int i=0;i<=n;i++){
	    	adj[i].clear();
	    }
	    special=vector<ll>(k);
		for(int i=0;i<k;i++)
		cin>>special[i];

				for(ll i=0;i<1000;i++)te[i]+=i;

		ll u,v;
		
		for(int i=0;i<n-1;i++)
		{
			cin>>u>>v;
			u--;
			v--;
			adj[v].push_back(u);
			adj[u].push_back(v);
		}
		
		vector<ppl>ar(n,{INT_MIN,-1});
		for(auto i:special){
			dt= vector<ll>(n,-1);
			dt[i-1]=0;
			dfs(i-1,-1);
			for(int j=0;j<n;j++){
				ll a= dt[A-1]-dt[j];
				ll b= i-1;
				ar[j] = maxx(ar[j], {a,b});
			}
		}		for(ll i=0;i<1000;i++)te[i]+=i*2;


		for(auto i:ar)cout<<i.first<<" ";
			cout<<'\n';
		for(auto i:ar)cout<<i.second+1<<" ";
		cout<<'\n';

}
void init_code(){
    IOS();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    // ios::sync_with_stdio(0);
      init_code();

    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}