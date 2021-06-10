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
bool ps(ll n)
{
    for (int i = 1; i * i <= n; i++) {
         if ((n % i == 0) && (n / i == i)) {
            return true;
        }
    }
    return false;
}

void solve() {
   ll n;cin>>n;
   vector<ll> a(n);
   for(auto &i:a)cin>>i;
   for(auto i:a){
       if(ps(i)==false){
           cout<<"YES\n";
           return ;
       }
   }
   cout<<"NO\n";
}
void init_code(){
    IOS();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
    // ios::sync_with_stdio(0);
       init_code();

	cin.tie(0);
	cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}