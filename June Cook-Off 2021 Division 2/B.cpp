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
   ll n;cin>>n;
   string s;cin>>s;
   ll cnt1=0;
   for(auto i:s){
       cnt1+=(i=='1');
   }
   vector<ll> fac;
   for(ll i=1;i*i<=n;i++){
       if(n%i==0){
           if(n/i!=i){
               fac.pb(n/i);
           }
        fac.pb(i);
       }
   }
   ll ans=1e9;
   for(auto i:fac){
       vector<ll> fre(i);
       for(ll j=0;j<i;j++){
           for(ll k=j;k<n;k+=i){
               if(s[k]=='1')fre[j]++;
           }
       }
       ll req=n/i;
       for(ll j=0;j<i;j++){
           ll temp=req-fre[j];
           temp+=(cnt1-fre[j]);
           ans=min(ans,temp);
       }
   }
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