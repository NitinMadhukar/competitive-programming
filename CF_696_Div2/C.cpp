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

vector<ll> che(vector<ll> a,ll n,ll x){
	multiset<ll> s;
	vector<ll> res;
	for(auto i:a)s.insert(i);
	for(ll i=0;i<n;i++){
		auto it=s.end();
		it--;
		ll y=x-*it;
		s.erase(it);
		if(s.find(y)==s.end())
		return {};
		res.pb(x-y);
		res.pb(y);
		x=max(x-y,y);
		s.erase(s.find(y));
	}
	return res;
}

void solve() {
   ll n;cin>>n;
   vector<ll> a(2*n);
   for(ll i=0;i<2*n;i++)cin>>a[i];
   	sort(a.begin(),a.end());
   for(ll i=0;i<2*n;i++){
   	ll x=a[i]+a[2*n-1];
   	vector<ll> res=che(a,n,x);
   	if(res.size()){
   		cout<<"YES\n";
   		cout<<x<<'\n';
   		for(ll j=0;j<n;j++){
   			cout<<res[2*j+1]<<" "<<res[2*j]<<'\n';
   		}
   		return;
   	}
   }
   cout<<"NO\n";
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}