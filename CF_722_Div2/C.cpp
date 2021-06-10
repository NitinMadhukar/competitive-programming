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
vector<ll>adj[100005];

vector<vector<ll>> dfs(ll cur,ll par,vector<vector<ll>>&a){
    vector<vector<ll>> ansrr(2,vector<ll>(2,0));
    ansrr[1][0]=a[cur][1];
    ansrr[0][0]=a[cur][0];
    for(auto i:adj[cur]){
        if(i==par){
            continue;
        }
        else{
            vector<vector<ll>> t=dfs(i,cur,a);
            ansrr[1][1]+=max(abs(ansrr[1][0]-t[1][0])+t[1][1],abs(ansrr[1][0]-t[0][0])+t[0][1]);
            ansrr[0][1]+=max(abs(ansrr[0][0]-t[1][0])+t[1][1],abs(ansrr[0][0]-t[0][0])+t[0][1]);
        }
    }
    return ansrr;
}

void solve() {
   ll n;cin>>n;
   vector<vector<ll>>ar(n,vector<ll>(2));
   for(ll i=0;i<n;i++)cin>>ar[i][0]>>ar[i][1];
   ll u,v;
   for(ll i=0;i<n+1;i++)adj[i].clear();
   for(ll i=0;i<n-1;i++){
       cin>>u>>v;
       u--;
       v--;
       adj[u].pb(v);
       adj[v].pb(u);
   }
   vector<vector<ll>> arrr=dfs(0,-1,ar);
   
   ll ans=max(arrr[0][1],arrr[1][1]);
   cout<<ans<<'\n';
}
int main(){
    IOS();
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}