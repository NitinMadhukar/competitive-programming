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
const ll mx=1e6;
ll ar[mx]={0};
ll res[mx];
void pre(){

  ar[0]=ar[1]=-1;
  for(ll i=2;i<mx;i++){
      if(ar[i]==0){
      for(ll j=2*i;j<mx;j+=i){
         ar[j]=-1;
      }
    }
  }
  ll ans=0;
   for(ll i=0;i<mx;i++){
   if(ar[i]==0&&ar[i-2]==0){
    ans++;
   }
   res[i]=ans;
}
}


void solve() {
  ll n;cin>>n;
   if(n<5){
    cout<<0<<'\n';
    return;
   }
  cout<<res[n]<<'\n';
} 
int main(){
    int t = 1;
    cin >> t;
    pre();
    for (int i = 0; i < t; ++i)
        solve();

return 0;
}