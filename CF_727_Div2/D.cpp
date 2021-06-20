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
#define vpll             vector<pair<ll,ll>>

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

bool compp(pll &a,pll &b){
	if(a.second<b.second)return true;
	if(a.second==b.second and a.first>b.first){
			return true;
	}
	return false;
}
void solve() {
	ll n;cin>>n;
	vpll arr(n);
	for(ll i=0;i<n;i++)cin>>arr[i].first>>arr[i].second;
	sort(all(arr),compp);
	
	ll ans=0,cnt=0,i=0,j=n-1;
	while(i<=j){
		if(arr[i].second>cnt){
			ll req=arr[i].second-cnt;
    		ll space=req;
    		space=min(space,arr[j].first);
    		arr[j].first-=space;
    		if(!arr[j].first)j--;
    		cnt+=space;
    		ans+=(space*2);
			continue;
		}
		cnt+=arr[i].first;
			ans+=arr[i].first;
			i++;
		
	}
	cout<<ans<<'\n';
}
int main(){
    IOS();
    ll t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}