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
vector<ll> a(1000000);
 ll n;
ll isH(ll i){
  return(i>0&&i<n-1&&a[i]<a[i-1]&&a[i]<a[i+1]);
}
ll isV(ll i){
  return(i>0&&i<n-1&&a[i]>a[i-1]&&a[i]>a[i+1]);
}

void solve() {
     cin>>n;
      for(ll i=0;i<n;i++)cin>>a[i];
      ll cv=0,ch=0;
      vector<ll> vis(n);
      ll s=0;
      for(ll i=1;i<n-1;i++){
          if(isH(i)||isV(i)){
            vis[i]=1;s++;
          }
      }  
      ll ans=s;
      for(ll i=1;i<n-1;i++){
          ll t=a[i];
          a[i]=a[i-1];
          ans=min(ans,s-vis[i-1]-vis[i]-vis[i+1]+isH(i-1)+isV(i-1)+isV(i)+isH(i)+isV(i+1)+isH(i+1));
          a[i]=a[i+1];
          ans=min(ans,s-vis[i-1]-vis[i]-vis[i+1]+isH(i-1)+isV(i-1)+isV(i)+isH(i)+isV(i+1)+isH(i+1));
          a[i]=t;
      }
      cout<<ans<<'\n';

}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}