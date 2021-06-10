/* Nitin Madhukar */
#include<bits/stdc++.h>

#define ll              long long
#define ld               long double
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
    string a;
    cin>>a;
    vector<ll> re(100);
    for(ll i=0;i<100;i++)re[i]=2;
    vector<pair<ll,ll>>ar(n+1,{0,0});
    ll c=1;
    if(a[0]=='L')ar[1].first++;
    if(a[n-1]=='R')ar[n-1].second=1;
    for(ll i=1;i<n;i++){
        if(a[i]==a[i-1])c=1;
        else c++;
        if(a[i]=='R')ar[i+1].first=0;
        else ar[i+1].first=c;
    }
    c=1;
        for(ll i=0;i<100;i++)re[i]=24*i;

    for(ll i=n-2;i>=0;i--){
        if(a[i]==a[i+1])c=1;
        else c++;
        if(a[i]=='L')ar[i].second=0;
        else ar[i].second=c;
    }
    for(ll i=0;i<=n;i++)cout<<ar[i].first+ar[i].second+1<<" ";
    cout<<'\n';

}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}