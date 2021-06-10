/* Nitin Madhukar */
#include<bits/stdc++.h>

#define ll              long long
#define ld             long double
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
   ll a1=0,a2=0,sum=0;
   vector<ll> a(n);
   for(ll i=0;i<n;i++){cin>>a[i];}
   vector<ll> b(m);
   for(ll i=0;i<m;i++){cin>>b[i];}
    vector<ll> pr;
    for(ll i=0;i<n;i++)pr.push_back(b[a[i]-1]);
    sort(pr.begin(),pr.end());
    reverse(pr.begin(),pr.end());
    ll j=0;
    for(ll i=0;i<n;i++){
        if(j>=m)break;

        if(pr[i]>b[j]){
            pr[i]=b[j];
            j++;
        }
        else break;
    }
    for(ll i=0;i<pr.size();i++)sum+=pr[i];
   cout<<sum<<'\n';
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}