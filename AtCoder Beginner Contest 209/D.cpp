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
   int n,q;cin>>n>>q;
   vi adj[n+1];
   int a,b;
   int tn=n;
   n--;
   while(n--){
       cin>>a>>b;
       a--;
       b--;
       adj[a].pb(b);
       adj[b].pb(a);
   }
   vector<ll> dst(tn+1,-1);
   queue<int> qe;
   qe.push(0);
   dst[0]=0;
   
   while(!qe.empty()){
       int fr=qe.front();
       qe.pop();
       for(auto i:adj[fr]){
           if(dst[i]==-1){
               dst[i]=dst[fr]+1;
               qe.push(i);
               
           }
       }
   }
   
   while(q--){
       cin>>a>>b;
       a--;
       b--;
       if(dst[a]%2==dst[b]%2){
           cout<<"Town\n";
       }
       else cout<<"Road\n";
   }
    return ;
}
int main(){
    IOS();
    int t = 1;
    // cin >> t;

    for (int i = 0; i < t; ++i)
        solve();

return 0;
}