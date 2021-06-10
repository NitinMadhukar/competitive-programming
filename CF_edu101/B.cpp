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

bool check(string a,string b){
	ll n=a.length(),j=0,m=b.length();
	for(ll i=0;i<n;i++){
		if(a[i]!=b[j])return false;
		else{
			j++;
			j%=m;
		}
	}
	if(j!=0)return false;
	else return true;
}

void solve() {
   string a,b;cin>>a>>b;
   	ll n=a.length(),m=b.length();
   	for(ll i=0;i<m;i++){
   		string t=b.substr(0,i+1);
   		if(check(a,t)&&check(b,t)){
   			ll x=(n)/(i+1),y=m/(i+1);
   			ll lc=x*y/__gcd(x,y);
   			while(lc--){
   				cout<<t;
   			}
   			cout<<'\n';
   			return;
   		}
   	}
   	cout<<"-1\n";
}
int main(){
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}