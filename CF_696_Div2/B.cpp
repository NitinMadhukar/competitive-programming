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

vector<ll> pr(1e7);

void pri(){
	vector<bool> is_prime(1e7+1,true);
	is_prime[0] = is_prime[1] = false;
	for (ll i = 2; i <= 1e7; i++) {
	    if (is_prime[i] && (long long)i * i <= 1e7) {
	        for (ll j = i * i; j <= 1e7; j += i)
	            is_prime[j] = false;
	    }
	}
	for(ll i=2;i<1e7;i++)
		if(is_prime[i])
			pr.push_back(i);
}

void solve() {
   ll n;cin>>n;
   ll ans=1,z=1,cun=1;
   for(ll i=0;i<pr.size();i++){
   	if(pr[i]>=(cun+n)){
   		cun=pr[i];
   		ans*=cun;
   		z++;
   	}
   	if(z==3)break;
   }
   cout<<ans<<'\n';
}
int main(){
    int t = 1;
    cin >> t;
    pri();
    for (int i = 0; i < t; ++i)
        solve();

return 0;
}