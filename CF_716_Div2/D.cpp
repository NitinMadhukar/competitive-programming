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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
	int n,i,j,q;cin>>n>>q;
	vector<vector<int>> id(n+1);
	vector<int>a(n+1);
	rep(i,1,n+1){
		cin>>a[i];
		id[a[i]].pb(i);
	}
	while(q--){
		int l,r;cin>>l>>r;
		auto ds=uniform_int_distribution<int>(l,r);
		set<int> vals;
		rep(j,0,22){
			int p = ds(rng);
			vals.insert(a[p]);
		}
		
		int mx = 0;
		for(int x:vals){
			int f = upper_bound(all(id[x]),r) - lower_bound(all(id[x]),l);
			mx=max(mx,f);
		}
		int wid = r - l + 1;
		
		int L = 0, U = mx;
		int ans=0;
		while(L <= U){
			int m = (L + U) / 2;
			int a = wid - m;
			int b = mx - m;
			int allowed = (a + 1) / 2;
			if(allowed >= b){
				ans = m;
				U = m - 1;
			}
			else{
				L = m + 1;
			}
		}
		ans++;
		cout<<ans<<"\n";
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
// /freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
		// init();
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}