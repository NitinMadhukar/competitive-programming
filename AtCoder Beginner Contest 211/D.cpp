/* Nitin Madhukar */
#include<bits/stdc++.h>
#include <algorithm>

#define ll              long long
#define mp              make_pair
#define lb              lower_bound
#define ub              upper_bound
#define all(x)          x.begin(), x.end()
#define big(x)          greater<x>()

#define sp              fixed<<setprecision
#define vi              vector<int>
#define vll             vector<ll>
#define vvi             vector<vi>
#define vvll            vector<vll>
#define pi              pair<int,int>
#define pll             pair<ll,ll>

#define PI              3.14159265
#define MOD             (int)1000000007
#define LINF            LONG_MAX
#define NL              LONG_MIN
#define INF             INT_MAX
#define NI              INT_MIN

#define IOS()           ios_base::sync_with_stdio(0);cin.tie(0);
#define deb(x)          cerr<<#x<<" : "<<x<<"\n";
#define deball(x)       for(auto iit:x) cerr<<" "<<iit;cerr<<"\n";
#define rep(i,b,c)      for(i=b; i<c; ++i)
#define rrep(i,b,c)     for(i=b; i>=c; --i)

#define IN              cin >>
#define OUT             cout <<
#define endl            "\n"
#define all(a)          (a).begin(), (a).end()
#define allr(a)         (a).rbegin(), (a).rend()
#define pb              push_back
#define fi              first
#define se              second
#define write(a)          \
    for (auto x : a)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl;
#define read(a)       \
    for (auto &x : a) \
    {                 \
        cin >> x;     \
    }

using namespace std;

void solve() {
	ll n,m;
	cin>>n>>m;
	vvll adj(n+1);
	for(ll i=0;i<m;i++){
		ll l,r;
		cin>>l>>r;
		adj[l].pb(r);
		adj[r].pb(l);
	}
	vll dist(n+1),vis(n+1),dis(n+1,-1);
	queue<ll> q;
	q.push(1);
	dist[1]=vis[1]=1;
	dis[1]=0;
	while(q.size()){
		int top=q.front();
		q.pop();
		for(int j:adj[top]){
			if(dis[j]==-1 or !vis[j] or dis[top]+1==dis[j]){
				if(dis[j]==-1)
					dis[j]=dis[top]+1;
				dist[j]=(dist[j]+dist[top])%MOD;
				if(!vis[j])
					q.push(j);
				vis[j]=true;
			}
		}
	}
	cout<<dist[n];
}
int main(){
    IOS();
    ll t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}