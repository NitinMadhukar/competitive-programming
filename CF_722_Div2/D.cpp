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
const int mod=998244353;
vector<ll>dp,pre;
void solve() {
   ll n;cin>>n;
   dp.resize(n+1);
   pre.resize(n+1);
   
   vector<ll> ar(2*n+1,0);
   for(ll i=2;i<=2*n;i+=2){
       for(ll j=i;j<=2*n;j+=i)ar[j]++;
   }
   dp[0]=1;
   dp[1]=1;
   pre[0]=1;
   pre[1]=2;
   
   for(ll i=2;i<=n;i++){
       dp[i]=((pre[i-1])%mod+(ar[2*i])%mod-1)%mod;
       pre[i]=((dp[i])%mod+(pre[i-1])%mod)%mod;
   }
   cout<<dp[n]%mod<<'\n';
}
int main(){
    IOS();
    int t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}