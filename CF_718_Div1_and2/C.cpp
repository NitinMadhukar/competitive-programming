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

ll ar[501][501];
void solve() {
	ll n;cin>>n;
	for(ll i=1;i<=n;i++){
		ll x;cin>>x;
		ll r=i,c=i;
		for(ll j=1;j<=x;j++){
			ar[r][c]=x;
			if(c>1 and ar[r][c-1]==0)c--;
			else r++;
		}
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=i;j++)
			cout<<ar[i][j]<<" ";
		cout<<endl;
	}
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
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}