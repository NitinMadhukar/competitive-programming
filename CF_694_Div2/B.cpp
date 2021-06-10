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
   ll n,k;cin>>n>>k;
   ll a1=0,a2=0,sum=0;
   vector<ll> a(n);
   for(ll i=0;i<n;i++){cin>>a[i];sum+=a[i];}
//   vector<ll> as;//
   bool f=true;
   ll ne=k;
   while(f){
       for(auto i:a){
           if(i%k){
               f=false;
               break;
               
           }
           else sum+=i;
       }
       k*=ne;
   }
   cout<<sum<<'\n';
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}