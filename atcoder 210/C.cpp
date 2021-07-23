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

ll mxxx(unordered_map<ll,ll> &mp){
	ll ans=0;
	for(auto i:mp)
		ans=max(ans,i.second);
	return ans;

}
void solve() {
	ll n,k;cin>>n>>k;
	vll arr(n);
	ll res=0,ans=0;
	read(arr);
	ll mx=0;
	unordered_map<ll,ll> mp;
	for(ll i=0;i<k;i++){
		mp[arr[i]-1]++;
		if(mp[arr[i]-1]==1)
			mx++;
	}
	ans=mx;
	for(ll i=0;i<n-k;i++){
		mp[arr[i]-1]--;
		if(mp[arr[i]-1]==0)
			ans--;
		if(mp[arr[i+k]-1]==0)
			ans++;
		mp[arr[i+k]-1]++;

		mx=max(mx,ans);
	}
	cout<<mx;	
}
int main(){
    IOS();
    ll t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}