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

ll solve(ll x,ll y,string s){
    ll a=0,b=0;
    for(auto i:s){
        ll c,d;
        if(i=='C'){
            c=min(a,b+y);
            d=1e9;
        }
        else if(i=='J'){
            c=1e9;
            d=min(a+x,b);
        }
        else{
            c=min(a,b+y);
            d=min(a+x,b);
        }
        a=c;
        b=d;
    }
    return min(a,b);
}
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int t = 1;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        ll x,y;cin>>x>>y;
        string a;cin>>a;
        cout<<"Case #"<<i+1<<": "<<solve(x,y,a)<<'\n';
    }

return 0;
}