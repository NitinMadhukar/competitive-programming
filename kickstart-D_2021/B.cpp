/* Nitin Madhukar */
#include<bits/stdc++.h>
#include <algorithm>

#define ll              long long
#define mewewep              make_pair
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

const ll MXIIII=400035;
ll bitarr[MXIIII];

ll pointquery(ll i){
	ll ans=0LL;
	for(++i;i>0LL;i-=i&-i)
		ans+=bitarr[i];
	return ans;
}

void add(ll i, ll val){
	for(++i;i<MXIIII;i+=i&-i){
		bitarr[i]+=val;
	}
}

void rangeadd(ll l, ll r ,ll val){
	add(l,val);
	add(r+1LL,-val);
}


void inserttt(set<ll> &pts,vvll &ar){
	for(auto i:ar){
		pts.insert(i[1]);pts.insert(i[1]-1);pts.insert(i[0]+1);pts.insert(i[0]);
	}

}


void solve() {
	ll n,c;

	set<ll> pts;
	unordered_map<ll,ll> mp,mp1;
	vll pcnt(MXIIII,0),cnt(MXIIII,0);
		map<ll,ll> mmp;

	memset(bitarr,0,sizeof(bitarr));
	cin>>n>>c;
	ll ans=n;
	vvll ar(n,vll(2));
	for(ll i=0;i<n;i++)
		cin>>ar[i][0]>>ar[i][1];

	inserttt(pts,ar);

	// multiset<pair<ll,ll>> mst;
	// for(ll i=0;i<MXIIII;i++)mst.insert({pointquery(i),i});

	for(auto i:pts)mp[i]=mp.size();
	for(auto i:mp)mp1[i.second]=i.first;

	for(auto i:ar){
		if(i[1]-i[0]>=2)
			rangeadd(mp[i[0]+1],mp[i[1]-1],1);
	}


	for(ll i=0;i<MXIIII;i++){
		pcnt[i]=pointquery(i);
		cnt[pcnt[i]]++;

		if(i<=0)continue;
		else {
			if(pcnt[i]==pcnt[i-1]){
				ll gp=(mp1[i]-mp1[i-1]-1);
				if(gp>0)
					cnt[pcnt[i]]+=gp;
			}
		}
	}


	for(ll i=0;i<MXIIII;i++){
		if(cnt[i]<=0)continue;
		else mmp[i]=cnt[i];
	}

	while(c>0){
		if(!mmp.size())
			break;
		auto pre=*(prev(mmp.end()));
		ll val=pre.first;
		ll cntt=pre.second;
		ll tmp=min(cntt,c);
		ans+=(tmp*val);
		mmp[val]-=cntt;
		if(!mmp[val])
			mmp.erase(val);
		c-=tmp;
	}
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