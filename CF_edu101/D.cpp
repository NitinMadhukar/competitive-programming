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

void solve() {
   ll n,m;cin>>n>>m;
   string s;cin>>s;
   ll mins[n+2]={0},maxs[n+2]={0},mine[n+2]={0},maxe[n+2]={0},a[n+2]={0},ar[n+2]={0};
   for(ll i=1;i<=n;i++){
       ll t=(s[i-1]=='+')?1:-1;
       a[i]=a[i-1]+t;
       mins[i]=min(mins[i-1],a[i]);
       maxs[i]=max(maxs[i-1],a[i]);
   }
   for(ll i=n;i>=1;i--){
       ll t=(s[i-1]=='+')?1:-1;
       ar[i]=ar[i+1]+t;
       mine[i]=min(mine[i+1],ar[i]);
       maxe[i]=max(maxe[i+1],ar[i]);
   }
   while(m--){
       ll l,r;cin>>l>>r;
       ll mn=min(mins[l-1],a[l-1]+ar[r+1]-maxe[r+1]);
       ll mx=max(maxs[l-1],a[l-1]+ar[r+1]-mine[r+1]);
       cout<<mx-mn+1<<'\n';
   }
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}