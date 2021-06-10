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

using namespace std;
vector<vector<ll>>ar(3,vector<ll>());
ll a,b,c;
ll calc(){
    ll ans=0,s1=0,s2=0;
    for(ll i:ar[0])ans+=i;
      for(ll i=1;i<b;i++)s1+=ar[1][i];
        for(ll i=1;i<c;i++)s2+=ar[2][i];
      ans+=max({s1-ar[1][0]+s2-ar[2][0],-s1-ar[1][0]+s2+ar[2][0],s1+ar[1][0]-s2-ar[2][0]}); 
    return ans;
}

void solve() {
    cin>>a>>b>>c;
    ar[0].resize(a);
    ar[1].resize(b);
    ar[2].resize(c);

      for(ll i=0;i<a;i++)cin>>ar[0][i];
      sort(ar[0].begin(),ar[0].end());
      for(ll i=0;i<b;i++)cin>>ar[1][i];
      sort(ar[1].begin(),ar[1].end());
      for(ll i=0;i<c;i++)cin>>ar[2][i];
      sort(ar[2].begin(),ar[2].end());

    ll ans=-1e18;
    ans=max(ans,calc());
    swap(ar[0],ar[1]);
    swap(a,b);
    ans=max(ans,calc());
    swap(ar[0],ar[2]);
    swap(a,c);
    ans=max(ans,calc());
    cout<<ans<<'\n';

}
int main(){
    int t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}