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
const int N = 100 * 1000 + 7;

using namespace std;
bool use[N];
char a[N];
void solve() {
    scanf("%s",a+1);
   ll n=strlen(a+1);
   for(ll i=1;i<=n;i++)use[i]=false;
   ll ans=0;
   for(ll i=2;i<=n;i++){
       bool usen=false;
       if(a[i-1]==a[i] && !use[i-1])
       usen=true;
       if(i>2 && a[i]==a[i-2] && !use[i-2])
       usen=true;
       use[i]=usen;
       ans+=use[i];
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