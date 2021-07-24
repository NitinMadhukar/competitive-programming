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
	string a;cin>>a;
	string str="chokudai";
	ll n=a.length();
	vector<vector<ll>> dp(9,vector<ll>(n+1));
	for(ll i=0;i<=n;i++)
		dp[0][i]=1;
	for(ll i=1;i<=8;i++){
		for(ll j=1;j<=n;j++){
			if(a[j-1]==str[i-1])
				dp[i][j]=(dp[i-1][j-1]+dp[i][j-1])%MOD;
			else
				dp[i][j]=dp[i][j-1]%MOD;
		}
	}
	cout<<(int)dp[8][n];
}
int main(){
    IOS();
    ll t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}