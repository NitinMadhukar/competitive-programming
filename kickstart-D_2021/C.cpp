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

    ll n,x,y,m,temp;
void solve() {
    cin>>n>>m;
    vvll ranges;
    for(ll i=0;i<n;i++){
        cin>>x>>y;
        ranges.pb({x,y});
    }

    vll ar(1001,0),ans;
    for(ll i=1;i<1001;i++){
        for(ll j=0;j<ranges.size();j++){
            if((i<=ranges[j][1]) and (i>=ranges[j][0])){
                ar[i]=1;
                break;
            }
        }
    }
    ll tm=m;

    while(tm--){
        cin>>temp;
        ll pre=temp;
        ll nxt=temp;
        while(pre!=0 and ar[pre]!=1)pre--;


        while((nxt!=1001) and (ar[nxt]!=1))
            nxt++;

        if(!pre)pre=-10000;

        if(nxt==1001)
            nxt=10000;

        if(nxt<(2*temp-pre)){
            ar[nxt]=2;
            ans.pb(nxt);
        }
        else{
            ar[pre]=2;
            ans.pb(pre);
        }

    }
    for(auto i:ans)
            cout<<i<<" ";
    cout<<endl;

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