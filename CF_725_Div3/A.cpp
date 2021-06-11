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
    vector<ll> a(n);
    for(auto &i:a)cin>>i;
    int mn=*min_element(all(a));
    int mx=*max_element(all(a));
    ll mnin=0,mxin=0;

    for(int i=0;i<n;i++){
        if(a[i]==mn)mnin=i;
        if(a[i]==mx)mxin=i;
    }
    ll at=min(mnin,mxin);
    ll b=max(mnin,mxin);
    
    ll a1=b+1;
    ll b1=n-at;
    ll c1=at+1+n-b;
    
    cout<<min({a1,b1,c1})<<'\n';
}
int main(){
    IOS();
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}