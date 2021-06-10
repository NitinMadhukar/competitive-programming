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
const int N = 100 * 1000 + 7;

using namespace std;

void solve() {
    ll n;cin>>n;
    vector<ll> w(n+1);
    vector<ll> de(n+1);
    
    for(ll i=1;i<=n;i++)cin>>w[i],de[i]=0;
    
    for(ll i=1;i<n;i++){
        ll u,v;cin>>u>>v;
        de[u]++,de[v]++;
    }
    ll ans=0;
    vector<ll> res;
    
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<de[i];j++)
            res.pb(w[i]);
        ans+=w[i];
    }
    cout<<ans<<' ';
    sort(res.begin(),res.end());
    reverse(res.begin(),res.end());
    for(auto &i:res){
        ans+=i;
        cout<<ans<<' ';
    }
    cout<<'\n';
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}