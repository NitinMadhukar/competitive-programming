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
	vector<vector<ll>> ar(3,vector<ll>(3));
	for(ll i=0;i<3;i++){
		for(ll j=0;j<3;j++){
			if(i==1 and j==1)
				ar[i][j]=0;
			else 
				cin>>ar[i][j];
		}
	}
	ll ans=0;

	if(2*ar[0][1]==ar[0][0]+ar[0][2])
		ans++;
	if(2*ar[2][1]==ar[2][0]+ar[2][2])
		ans++;
	if(2*ar[1][0]==ar[0][0]+ar[2][0])
		ans++;
	if(2*ar[1][2]==ar[0][2]+ar[2][2])
		ans++;

	map<ll,ll> mp;

	if((ar[0][0]+ar[2][2])%2==0)
		mp[(ar[0][0]+ar[2][2])/2]++;

	if((ar[0][2]+ar[2][0])%2==0)
		mp[(ar[0][2]+ar[2][0])/2]++;

	if((ar[0][1]+ar[2][1])%2==0)
		mp[(ar[0][1]+ar[2][1])/2]++;

	if(((ar[1][2]+ar[1][0])%2)==0)
		mp[(ar[1][2]+ar[1][0])/2]++;


	ll mx=0;
	for(auto i:mp)
		mx=max(mx,i.second);

	ans+=mx;



	cout<<ans<<'\n';
}
int main(){
    IOS();
    ll t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i){
    	cout<<"Case #"<<i+1<<": ";
            solve();
        }

return 0;
}