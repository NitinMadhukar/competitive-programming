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
   ll n;cin>>n;
   vector<ll> a(n);
   for(ll i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
     ll ans=1;
        bool f=false;
     for(ll i=1;i<n;i++){
      if(a[i]==a[i-1]) f=true;
      else if(a[i]==a[i-1]+1)ans++;
      else{
          if(f){
              ans++;
              f=false;
          }
          ans++;
      }
  }
        if(f)ans++;

  cout<<ans<<'\n';
    
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}